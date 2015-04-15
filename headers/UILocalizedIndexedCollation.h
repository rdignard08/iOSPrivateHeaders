
@interface UILocalizedIndexedCollation : NSObject {

    NSLocale* _locale;
    NSArray* _sectionTitles;
    NSArray* _sectionStartStrings;
    NSArray* _sectionIndexTitles;
    NSArray* _sectionIndexMapping;
    NSString* _transform;
    NSString* _firstSectionStartString;
    NSString* _lastSectionStartString;
    ^{__CFStringTokenizer=} _tokenizer;
}
@property (nonatomic, assign, readonly) NSArray* sectionTitles;
@property (nonatomic, assign, readonly) NSArray* sectionIndexTitles;
 + (id) collationWithDictionary:(id)a;
 + (id) currentCollation;

 - (void) dealloc;
 - (^{__CFStringTokenizer=}) tokenizer;
 - (id) transformedCollationStringForString:(id)a;
 - (id) sectionTitles;
 - (id) sectionIndexTitles;
 - (long long) sectionForSectionIndexTitleAtIndex:(long long)a;
 - (long long) sectionForObject:(id)acollationStringSelector:(SEL)b;
 - (id) sortedArrayFromArray:(id)acollationStringSelector:(SEL)b;
 - (id) initWithDictionary:(id)a;


@end
