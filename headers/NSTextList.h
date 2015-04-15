
@protocol NSCoding, NSCopying;
@interface NSTextList : NSObject <NSCoding, NSCopying> {

    @"NSString" _markerFormat;
    Q _listFlags;
    q _startIndex;
    ^v _listSecondary;
}
 + (void) initialize;
 + (id) _standardMarkerAttributesForAttributes:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (Q) options;
 - (Q) listOptions;
 - (id) initWithMarkerFormat:(id)aoptions:(Q)b;
 - (void) setStartingItemNumber:(q)a;
 - (id) markerFormat;
 - (q) startingItemNumber;
 - (id) _markerForMarkerFormat:(id)aitemNumber:(q)bisNumbered:(^B)csubstitutionStart:(^Q)dend:(^Q)especifierStart:(^Q)fend:(^Q)g;
 - (id) markerForItemNumber:(q)a;
 - (id) _unaffixedMarkerForItemNumber:(q)a;
 - (id) _markerAtIndex:(Q)ainText:(id)b;
 - (BOOL) _isOrdered;
 - (id) _markerTitle;
 - (id) _markerPrefix;
 - (id) _markerSpecifier;
 - (id) _unaffixedMarkerFormat;
 - (id) _unaffixedMarkerTitle;
 - (id) _markerSuffix;


@end
