
@interface NSComplexOrthography : NSOrthography {

    @"NSString" _dominantScript;
    @"NSDictionary" _languageMap;
    I _orthographyFlags;
}
 + (void) initialize;

 - (id) initWithDominantScript:(id)alanguageMap:(id)b;
 - (I) orthographyFlags;
 - (id) dominantScript;
 - (id) languageMap;
 - (void) dealloc;


@end
