
@interface NSLocalizableString : NSString {

    @"NSString" _stringsFileKey;
    @"NSString" _developmentLanguageString;
}
 + (id) localizableStringWithStringsFileKey:(id)adevelopmentLanguageString:(id)b;

 - (Class) classForCoder;
 - (id) awakeAfterUsingCoder:(id)a;
 - (id) initWithStringsFileKey:(id)adevelopmentLanguageString:(id)b;
 - (id) stringsFileKey;
 - (void) setStringsFileKey:(id)a;
 - (id) developmentLanguageString;
 - (void) setDevelopmentLanguageString:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (S) characterAtIndex:(Q)a;
 - (Q) length;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
