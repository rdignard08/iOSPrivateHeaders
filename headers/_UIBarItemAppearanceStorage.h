
@interface _UIBarItemAppearanceStorage : NSObject {

    NSMutableDictionary* textAttributesForState;
}

 - (void) dealloc;
 - (id) textAttributesForState:(unsigned long long)a;
 - (id) textAttributeForKey:(id)astate:(unsigned long long)b;
 - (void) setTextAttributes:(id)aforState:(unsigned long long)b;
 - (void) setTextAttribute:(id)aforKey:(id)bstate:(unsigned long long)c;


@end
