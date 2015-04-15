
@protocol NSCopying, NSCoding;
@interface NSOrthography : NSObject <NSCopying, NSCoding> {

}
@property (atomic, copy, readonly) NSString* dominantScript;
@property (atomic, copy, readonly) NSDictionary* languageMap;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) orthographyWithDominantScript:(id)alanguageMap:(id)b;

 - (Class) classForCoder;
 - (id) replacementObjectForPortCoder:(id)a;
 - (id) initWithDominantScript:(id)alanguageMap:(id)b;
 - (unsigned int) orthographyFlags;
 - (id) dominantScript;
 - (id) languageMap;
 - (id) dominantLanguage;
 - (id) allScripts;
 - (id) languagesForScript:(id)a;
 - (id) dominantLanguageForScript:(id)a;
 - (id) allLanguages;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
