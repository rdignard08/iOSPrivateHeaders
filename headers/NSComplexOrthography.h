
@interface NSComplexOrthography : NSOrthography {

    NSString* _dominantScript;
    NSDictionary* _languageMap;
    unsigned int _orthographyFlags;
}
 + (void) initialize;

 - (id) initWithDominantScript:(id)a languageMap:(id)b ;
 - (unsigned int) orthographyFlags;
 - (id) dominantScript;
 - (id) languageMap;
 - (void) dealloc;


@end
