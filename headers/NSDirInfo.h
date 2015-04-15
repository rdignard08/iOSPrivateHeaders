
@interface NSDirInfo : NSMutableDictionary {

    NSMutableDictionary* dict;
}

 - (id) initWithContentsOfFile:(id)a ;
 - (unsigned long long) writePath:(id)a docInfo:(id)b errorHandler:(id)c remapContents:(BOOL)d hardLinkPath:(id)e ;
 - (id) serializeToData;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a ;
 - (void) removeObjectForKey:(id)a ;
 - (id) initWithCapacity:(unsigned long long)a ;
 - (id) initWithObjects:(r^@)a forKeys:(r^@)b count:(unsigned long long)c ;
 - (id) keyEnumerator;
 - (void) setObject:(id)a forKey:(id)b ;
 - (id) initWithDictionary:(id)a copyItems:(BOOL)b ;
 - (id) init;
 - (id) initWithDictionary:(id)a ;


@end
