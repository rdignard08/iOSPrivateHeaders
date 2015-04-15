
@interface NSDirInfo : NSMutableDictionary {

    @"NSMutableDictionary" dict;
}

 - (id) initWithContentsOfFile:(id)a;
 - (unsigned long long) writePath:(id)adocInfo:(id)berrorHandler:(id)cremapContents:(BOOL)dhardLinkPath:(id)e;
 - (id) serializeToData;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (id) initWithCapacity:(unsigned long long)a;
 - (id) initWithObjects:(r^@)aforKeys:(r^@)bcount:(unsigned long long)c;
 - (id) keyEnumerator;
 - (void) setObject:(id)aforKey:(id)b;
 - (id) initWithDictionary:(id)acopyItems:(BOOL)b;
 - (id) init;
 - (id) initWithDictionary:(id)a;


@end
