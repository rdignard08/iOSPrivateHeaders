
@protocol NSCopying, NSCoding;
@interface CUIRenditionKey : NSObject <NSCopying, NSCoding> {

    [16{_renditionkeytoken="identifier"S"value"S}] _stackKey;
    ^{_renditionkeytoken=SS} _key;
    unsigned short _highwaterKeyCount;
}
 + (void) initialize;
 + (id) renditionKey;
 + (id) _placeHolderKey;
 + (id) renditionKeyWithKeyList:(r^{_renditionkeytoken=SS})a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithThemeElement:(long long)athemePart:(long long)bthemeSize:(long long)cthemeDirection:(long long)dthemeValue:(long long)ethemeDimension1:(long long)fthemeDimension2:(long long)gthemeState:(long long)hthemePresentationState:(long long)ithemeLayer:(long long)jthemeScale:(long long)kthemeIdentifier:(long long)l;
 - (r^{_renditionkeytoken=SS}) keyList;
 - (id) initWithKeyList:(r^{_renditionkeytoken=SS})a;
 - (void) setThemeScale:(long long)a;
 - (void) setThemeLayer:(long long)a;
 - (long long) themeLayer;
 - (void) copyValuesFromKeyList:(r^{_renditionkeytoken=SS})a;
 - (void) setValuesFromKeyList:(r^{_renditionkeytoken=SS})a;
 - (long long) themeState;
 - (long long) themeValue;
 - (long long) themeSize;
 - (long long) themeScale;
 - (void) setThemeSize:(long long)a;
 - (void) setThemeState:(long long)a;
 - (void) setThemeValue:(long long)a;
 - (void) _expandKeyIfNecessaryForCount:(long long)a;
 - (unsigned short) _systemTokenCount;
 - (long long) themeElement;
 - (long long) themePart;
 - (long long) themeIdentifier;
 - (long long) themeSizeClassHorizontal;
 - (long long) themeSizeClassVertical;
 - (long long) themeIdiom;
 - (long long) themeSubtype;
 - (id) nameOfAttributeName:(int)a;
 - (void) removeValueForKeyTokenIdentifier:(long long)a;
 - (void) setThemeElement:(long long)a;
 - (void) setThemePart:(long long)a;
 - (void) setThemeDirection:(long long)a;
 - (long long) themeDirection;
 - (void) setThemePreviousValue:(long long)a;
 - (long long) themePreviousValue;
 - (void) setThemeDimension1:(long long)a;
 - (long long) themeDimension1;
 - (void) setThemeDimension2:(long long)a;
 - (long long) themeDimension2;
 - (void) setThemePreviousState:(long long)a;
 - (long long) themePreviousState;
 - (void) setThemePresentationState:(long long)a;
 - (long long) themePresentationState;
 - (void) setThemeIdiom:(long long)a;
 - (void) setThemeSubtype:(long long)a;
 - (void) setThemeSizeClassHorizontal:(long long)a;
 - (void) setThemeSizeClassVertical:(long long)a;
 - (void) setThemeMemoryClass:(long long)a;
 - (long long) themeMemoryClass;
 - (void) setThemeGraphicsClass:(long long)a;
 - (long long) themeGraphicsClass;
 - (void) setThemeIdentifier:(long long)a;
 - (id) descriptionBasedOnKeyFormat:(r^{_renditionkeyfmt=III[0I]})a;


@end
