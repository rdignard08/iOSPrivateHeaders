
@interface NSDirInfo : NSMutableDictionary {

    @"NSMutableDictionary" dict;
}

 - (id) initWithContentsOfFile:(id)a;
 - (Q) writePath:(id)adocInfo:(id)berrorHandler:(id)cremapContents:(BOOL)dhardLinkPath:(id)e;
 - (id) serializeToData;
 - (void) dealloc;
 - (Q) count;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (id) initWithCapacity:(Q)a;
 - (id) initWithObjects:(r^@)aforKeys:(r^@)bcount:(Q)c;
 - (id) keyEnumerator;
 - (void) setObject:(id)aforKey:(id)b;
 - (id) initWithDictionary:(id)acopyItems:(BOOL)b;
 - (id) init;
 - (id) initWithDictionary:(id)a;


@end