
@interface _UIBarItemAppearanceStorage : NSObject {

    NSMutableDictionary* textAttributesForState;
}

 - (void) dealloc;
 - (id) textAttributesForState:(unsigned long long)a ;
 - (id) textAttributeForKey:(id)a state:(unsigned long long)b ;
 - (void) setTextAttributes:(id)a forState:(unsigned long long)b ;
 - (void) setTextAttribute:(id)a forKey:(id)b state:(unsigned long long)c ;


@end
