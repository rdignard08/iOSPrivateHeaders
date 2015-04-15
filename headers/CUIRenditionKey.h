
@protocol NSCopying, NSCoding;
@interface CUIRenditionKey : NSObject <NSCopying, NSCoding> {

    [16{_renditionkeytoken="identifier"S"value"S}] _stackKey;
    ^{_renditionkeytoken=SS} _key;
    S _highwaterKeyCount;
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
 - (id) initWithThemeElement:(q)athemePart:(q)bthemeSize:(q)cthemeDirection:(q)dthemeValue:(q)ethemeDimension1:(q)fthemeDimension2:(q)gthemeState:(q)hthemePresentationState:(q)ithemeLayer:(q)jthemeScale:(q)kthemeIdentifier:(q)l;
 - (r^{_renditionkeytoken=SS}) keyList;
 - (id) initWithKeyList:(r^{_renditionkeytoken=SS})a;
 - (void) setThemeScale:(q)a;
 - (void) setThemeLayer:(q)a;
 - (q) themeLayer;
 - (void) copyValuesFromKeyList:(r^{_renditionkeytoken=SS})a;
 - (void) setValuesFromKeyList:(r^{_renditionkeytoken=SS})a;
 - (q) themeState;
 - (q) themeValue;
 - (q) themeSize;
 - (q) themeScale;
 - (void) setThemeSize:(q)a;
 - (void) setThemeState:(q)a;
 - (void) setThemeValue:(q)a;
 - (void) _expandKeyIfNecessaryForCount:(q)a;
 - (S) _systemTokenCount;
 - (q) themeElement;
 - (q) themePart;
 - (q) themeIdentifier;
 - (q) themeSizeClassHorizontal;
 - (q) themeSizeClassVertical;
 - (q) themeIdiom;
 - (q) themeSubtype;
 - (id) nameOfAttributeName:(i)a;
 - (void) removeValueForKeyTokenIdentifier:(q)a;
 - (void) setThemeElement:(q)a;
 - (void) setThemePart:(q)a;
 - (void) setThemeDirection:(q)a;
 - (q) themeDirection;
 - (void) setThemePreviousValue:(q)a;
 - (q) themePreviousValue;
 - (void) setThemeDimension1:(q)a;
 - (q) themeDimension1;
 - (void) setThemeDimension2:(q)a;
 - (q) themeDimension2;
 - (void) setThemePreviousState:(q)a;
 - (q) themePreviousState;
 - (void) setThemePresentationState:(q)a;
 - (q) themePresentationState;
 - (void) setThemeIdiom:(q)a;
 - (void) setThemeSubtype:(q)a;
 - (void) setThemeSizeClassHorizontal:(q)a;
 - (void) setThemeSizeClassVertical:(q)a;
 - (void) setThemeMemoryClass:(q)a;
 - (q) themeMemoryClass;
 - (void) setThemeGraphicsClass:(q)a;
 - (q) themeGraphicsClass;
 - (void) setThemeIdentifier:(q)a;
 - (id) descriptionBasedOnKeyFormat:(r^{_renditionkeyfmt=III[0I]})a;


@end
