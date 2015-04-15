
@interface NSAutoLocale : NSLocale {

    @"NSLocale" loc;
}
 + (BOOL) supportsSecureCoding;

 - (Class) classForCoder;
 - (void) _update:(id)a;
 - (id) _init;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) objectForKey:(id)a;
 - (unsigned char) _nullLocale;
 - (void) _setNullLocale;
 - (id) _prefs;
 - (id) displayNameForKey:(id)avalue:(id)b;
 - (id) initWithLocaleIdentifier:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
