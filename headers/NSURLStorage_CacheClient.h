
@protocol NSURLStorageCacheClient;
@interface NSURLStorage_CacheClient : NSObject <NSURLStorageCacheClient> {

    NSXPCInterface _netStoreInterface;
    NSXPCConnection _networkStorageConnection;
    NSString _taskManagerIdentifier;
    NSString _path;
    ^{__CFURLCache=^^?^i@@?@qBqqqqqqqqQ^{__CFString}^{__CFString}^{__CFString}*BB^{sqlite3}^{sqlite3}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{CoreLockable}^{CoreLockable}^{CoreLockable}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}{unordered_map<int, __CFURLCacheNode *, __CFURLCache__::HashFunc, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, __CFURLCacheNode *> > >={__hash_table<std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, __CFURLCache__::HashFunc, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, __CFURLCacheNode *> > >={unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > >={__compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > >=^^{__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *>=^{__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, __CFURLCache__::HashFunc, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::equal_to<int>, true> >=f}}}{deque<__CFURLCacheNode *, std::__1::allocator<__CFURLCacheNode *> >={__split_buffer<__CFURLCacheNode **, std::__1::allocator<__CFURLCacheNode **> >=^^^{__CFURLCacheNode}^^^{__CFURLCacheNode}^^^{__CFURLCacheNode}{__compressed_pair<__CFURLCacheNode ***, std::__1::allocator<__CFURLCacheNode **> >=^^^{__CFURLCacheNode}}}Q{__compressed_pair<unsigned long, std::__1::allocator<__CFURLCacheNode *> >=Q}}^{__CFRunLoopSource}^{_opaque_pthread_t}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{__CFArray}^{__CFArray}BB@@B@^{_CFURLCache}BBqqB^{__asl_object_s}SqBBBBqBBq@^{__CFSet}^{__CFArray}q@{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{__CFDictionary}B{bitset<32768>=[512Q]}{_opaque_pthread_mutex_t=q[56c]}B*@} _cfCache;
    NSData _sandboxExtensionToken;
    long long _storageSize;
    BOOL _networkStorageConnectionInterrupted;
}
@property (atomic, assign, readwrite) NSNumber* networkStorageConnectionInterrupted;

 - (void) dealloc;
 - (void) deleteResponsesSinceDate:(id)a;
 - (void) _disassociateCFURLCacheInstance;
 - (void) setMinSizeForVMCachedResource:(long long)a;
 - (id) initWithCache:(^{__CFURLCache=^^?^i@@?@qBqqqqqqqqQ^{__CFString}^{__CFString}^{__CFString}*BB^{sqlite3}^{sqlite3}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{CoreLockable}^{CoreLockable}^{CoreLockable}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}{unordered_map<int, __CFURLCacheNode *, __CFURLCache__::HashFunc, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, __CFURLCacheNode *> > >={__hash_table<std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, __CFURLCache__::HashFunc, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, __CFURLCacheNode *> > >={unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > >={__compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > >=^^{__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *>=^{__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, __CFURLCache__::HashFunc, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::equal_to<int>, true> >=f}}}{deque<__CFURLCacheNode *, std::__1::allocator<__CFURLCacheNode *> >={__split_buffer<__CFURLCacheNode **, std::__1::allocator<__CFURLCacheNode **> >=^^^{__CFURLCacheNode}^^^{__CFURLCacheNode}^^^{__CFURLCacheNode}{__compressed_pair<__CFURLCacheNode ***, std::__1::allocator<__CFURLCacheNode **> >=^^^{__CFURLCacheNode}}}Q{__compressed_pair<unsigned long, std::__1::allocator<__CFURLCacheNode *> >=Q}}^{__CFRunLoopSource}^{_opaque_pthread_t}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{__CFArray}^{__CFArray}BB@@B@^{_CFURLCache}BBqqB^{__asl_object_s}SqBBBBqBBq@^{__CFSet}^{__CFArray}q@{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{__CFDictionary}B{bitset<32768>=[512Q]}{_opaque_pthread_mutex_t=q[56c]}B*@})a;
 - (BOOL) createStorageTaskManagerForPath:(id)amaxSize:(long long)bextension:(id)cwithIdentifier:(id)d;
 - (void) copyAllPartitionNamesWithCompletionHandler:(@?)a;
 - (void) copyHostNamesForOptionalPartition:(id)ahandler:(@?)b;
 - (void) deleteAllHostNames:(id)aforOptionalPartition:(id)b;
 - (void) cachedResponseForKey:(id)ahandler:(@?)b;
 - (void) setMaxSize:(long long)a;
 - (long long) currentDiskUsage;
 - (void) deleteAllResponses;
 - (void) addCachedResponseWithDictionary:(id)akey:(id)b;
 - (id) getPath;
 - (void) deleteResponseForRequestWithKey:(id)awithCompletionHandler:(@?)b;
 - (void) notifyCachedURLResponseBecameFileBacked:(id)afilePath:(id)bforUUID:(id)c;
 - (void) setNetworkStorageConnectionInterrupted:(BOOL)a;
 - (BOOL) networkStorageConnectionInterrupted;
 - (void) _reconnectWithStorageServer;
 - (BOOL) ensureNetworkStorageDaemonConnection;
 - (void) _associateCFURLCacheInstance:(^{__CFURLCache=^^?^i@@?@qBqqqqqqqqQ^{__CFString}^{__CFString}^{__CFString}*BB^{sqlite3}^{sqlite3}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{CoreLockable}^{CoreLockable}^{CoreLockable}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}{unordered_map<int, __CFURLCacheNode *, __CFURLCache__::HashFunc, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, __CFURLCacheNode *> > >={__hash_table<std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, __CFURLCache__::HashFunc, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, __CFURLCacheNode *> > >={unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > >={__compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > >=^^{__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *>=^{__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, __CFURLCache__::HashFunc, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::equal_to<int>, true> >=f}}}{deque<__CFURLCacheNode *, std::__1::allocator<__CFURLCacheNode *> >={__split_buffer<__CFURLCacheNode **, std::__1::allocator<__CFURLCacheNode **> >=^^^{__CFURLCacheNode}^^^{__CFURLCacheNode}^^^{__CFURLCacheNode}{__compressed_pair<__CFURLCacheNode ***, std::__1::allocator<__CFURLCacheNode **> >=^^^{__CFURLCacheNode}}}Q{__compressed_pair<unsigned long, std::__1::allocator<__CFURLCacheNode *> >=Q}}^{__CFRunLoopSource}^{_opaque_pthread_t}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{__CFArray}^{__CFArray}BB@@B@^{_CFURLCache}BBqqB^{__asl_object_s}SqBBBBqBBq@^{__CFSet}^{__CFArray}q@{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{__CFDictionary}B{bitset<32768>=[512Q]}{_opaque_pthread_mutex_t=q[56c]}B*@})a;
 - (void) addCachedResponse:(id)akey:(id)b;


@end
