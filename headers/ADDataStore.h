
@interface ADDataStore : NSObject {

    NSString* _path;
    ^{Database=^{sqlite3}{unordered_map<unsigned long, sqlite3_stmt *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, sqlite3_stmt *> > >={__hash_table<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *> > >={unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> *> > >={__compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> *> > >=^^{__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> *>=^{__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, std::__1::hash<unsigned long>, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, std::__1::equal_to<unsigned long>, true> >=f}}}} _database;
}
@property (nonatomic, assign, readonly) NSString* path;

 - (id) initWithPath:(id)a ;
 - (void) dealloc;
 - (id) path;
 - (BOOL) scalarsForKeyPrefix:(id)a minDaysSince1970:(int)b maxDaysSince1970:(int)c rowHandler:(@?)d ;
 - (BOOL) distributionsForKeyPrefix:(id)a minDaysSince1970:(int)b maxDaysSince1970:(int)c rowHandler:(@?)d ;
 - (id) initWithDefaultPath;
 - (BOOL) scalarsForKeyPrefix:(id)a minDaysSince1970:(int)b maxDaysSince1970:(int)c withConsumer:(id)d ;
 - (BOOL) distributionsForKeyPrefix:(id)a minDaysSince1970:(int)b maxDaysSince1970:(int)c withConsumer:(id)d ;


@end
