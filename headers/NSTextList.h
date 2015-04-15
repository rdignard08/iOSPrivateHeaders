
@protocol NSCoding, NSCopying;
@interface NSTextList : NSObject <NSCoding, NSCopying> {

    NSString* _markerFormat;
    unsigned long long _listFlags;
    long long _startIndex;
    ^v _listSecondary;
}
 + (void) initialize;
 + (id) _standardMarkerAttributesForAttributes:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (unsigned long long) options;
 - (unsigned long long) listOptions;
 - (id) initWithMarkerFormat:(id)a options:(unsigned long long)b ;
 - (void) setStartingItemNumber:(long long)a ;
 - (id) markerFormat;
 - (long long) startingItemNumber;
 - (id) _markerForMarkerFormat:(id)a itemNumber:(long long)b isNumbered:(^B)c substitutionStart:(^Q)d end:(^Q)e specifierStart:(^Q)f end:(^Q)g ;
 - (id) markerForItemNumber:(long long)a ;
 - (id) _unaffixedMarkerForItemNumber:(long long)a ;
 - (id) _markerAtIndex:(unsigned long long)a inText:(id)b ;
 - (BOOL) _isOrdered;
 - (id) _markerTitle;
 - (id) _markerPrefix;
 - (id) _markerSpecifier;
 - (id) _unaffixedMarkerFormat;
 - (id) _unaffixedMarkerTitle;
 - (id) _markerSuffix;


@end
