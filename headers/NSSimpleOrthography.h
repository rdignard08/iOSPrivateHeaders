
@interface NSSimpleOrthography : NSOrthography {

    I _orthographyFlags;
}
 + (id) orthographyWithFlags:(I)a;
 + (void) initialize;

 - (Class) classForCoder;
 - (id) initWithDominantScript:(id)alanguageMap:(id)b;
 - (I) orthographyFlags;
 - (id) dominantScript;
 - (id) languageMap;
 - (id) dominantLanguage;
 - (id) allScripts;
 - (id) languagesForScript:(id)a;
 - (id) dominantLanguageForScript:(id)a;
 - (id) allLanguages;
 - (id) initWithFlags:(I)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
