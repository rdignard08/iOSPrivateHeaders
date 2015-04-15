
@interface NSSimpleOrthography : NSOrthography {

    unsigned int _orthographyFlags;
}
 + (id) orthographyWithFlags:(unsigned int)a;
 + (void) initialize;

 - (Class) classForCoder;
 - (id) initWithDominantScript:(id)a languageMap:(id)b ;
 - (unsigned int) orthographyFlags;
 - (id) dominantScript;
 - (id) languageMap;
 - (id) dominantLanguage;
 - (id) allScripts;
 - (id) languagesForScript:(id)a ;
 - (id) dominantLanguageForScript:(id)a ;
 - (id) allLanguages;
 - (id) initWithFlags:(unsigned int)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
