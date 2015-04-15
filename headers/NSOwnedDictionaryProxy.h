
@interface NSOwnedDictionaryProxy : NSDictionary {

    id _owner;
}

 - (void) superRelease;
 - (id) initWithOwner:(id)a;
 - (id) retain;
 - (Vv) release;
 - (Q) count;
 - (id) objectForKey:(id)a;
 - (id) keyEnumerator;


@end
