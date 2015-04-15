
@interface NSLocalizableString : NSString {

    NSString* _stringsFileKey;
    NSString* _developmentLanguageString;
}
 + (id) localizableStringWithStringsFileKey:(id)adevelopmentLanguageString:(id)b;

 - (Class) classForCoder;
 - (id) awakeAfterUsingCoder:(id)a ;
 - (id) initWithStringsFileKey:(id)a developmentLanguageString:(id)b ;
 - (id) stringsFileKey;
 - (void) setStringsFileKey:(id)a ;
 - (id) developmentLanguageString;
 - (void) setDevelopmentLanguageString:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (unsigned short) characterAtIndex:(unsigned long long)a ;
 - (unsigned long long) length;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
