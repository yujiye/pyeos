//#include "db_api.hpp"

#warning TODO: Implementing get_code
uint64_t get_code() {
   return 0;
}

bool is_nan( const float32_t f ) {
   return ((f.v & 0x7FFFFFFF) > 0x7F800000);
}

bool is_nan( const float64_t f ) {
   return ((f.v & 0x7FFFFFFFFFFFFFFF) > 0x7FF0000000000000);
}

bool is_nan( const float128_t& f ) {
   return (((~(f.v[1]) & uint64_t( 0x7FFF000000000000 )) == 0) && (f.v[0] || ((f.v[1]) & uint64_t( 0x0000FFFFFFFFFFFF ))));
}

int32_t db_store_i64(uint64_t scope, uint64_t table, uint64_t payer, uint64_t id,  const char* data, uint32_t len) {
   return 0;//db_api::get().db_store_i64(scope, table, payer, id,  (const char*)data, len);
}

void db_update_i64(int32_t iterator, uint64_t payer, const char* data, uint32_t len) {
   return;//ctx().db_update_i64(iterator, payer, (const char*)data, len);
}

void db_remove_i64(int32_t iterator) {
   return;//ctx().db_remove_i64(iterator);
}

int32_t db_get_i64(int32_t iterator, const char* data, uint32_t len) {
   return 0;//ctx().db_get_i64(iterator, (char*)data, len);
}

int32_t db_get_i64_ex( int itr, uint64_t* primary, char* buffer, size_t buffer_size ) {
   return 0;//ctx().db_get_i64_ex( itr, *primary, buffer, buffer_size );
}

const char* db_get_i64_exex( int itr, size_t* buffer_size ) {
   return 0;//ctx().db_get_i64_exex( itr,  buffer_size);
}

int32_t db_next_i64(int32_t iterator, uint64_t* primary) {
   return 0;//ctx().db_next_i64(iterator, *primary);
}

int32_t db_previous_i64(int32_t iterator, uint64_t* primary) {
   return 0;//ctx().db_previous_i64(iterator, *primary);
}

int32_t db_find_i64(uint64_t code, uint64_t scope, uint64_t table, uint64_t id) {
   return 0;//ctx().db_find_i64(code, scope, table, id);
}

int32_t db_lowerbound_i64(uint64_t code, uint64_t scope, uint64_t table, uint64_t id) {
   return 0;//ctx().db_lowerbound_i64(code, scope, table, id);
}

int32_t db_upperbound_i64(uint64_t code, uint64_t scope, uint64_t table, uint64_t id) {
   return 0;//ctx().db_upperbound_i64(code, scope, table, id);
}

int32_t db_end_i64(uint64_t code, uint64_t scope, uint64_t table) {
   return 0;//ctx().db_end_i64(code, scope, table);
}

