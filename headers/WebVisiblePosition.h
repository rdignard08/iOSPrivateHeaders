
@interface WebVisiblePosition : NSObject {

    ^{WebObjectInternal=} _internal;
}
@property (nonatomic, assign, readwrite) NSNumber* affinity;
 + (id) _wrapVisiblePosition:({VisiblePosition={Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}i})a;
 + (id) _wrapVisiblePositionIfValid:({VisiblePosition={Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}i})a;

 - (Vv) release;
 - (Vv) _webcore_releaseOnWebThread;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (long long) compare:(id)a;
 - (int) affinity;
 - (BOOL) atBoundaryOfGranularity:(int)ainDirection:(int)b;
 - (id) enclosingTextUnitOfGranularity:(int)ainDirectionIfAtBoundary:(int)b;
 - (id) positionOfNextBoundaryOfGranularity:(int)ainDirection:(int)b;
 - (int) distanceFromPosition:(id)a;
 - (id) positionByMovingInDirection:(int)aamount:(unsigned int)b;
 - (BOOL) withinTextUnitOfGranularity:(int)ainDirectionIfAtBoundary:(int)b;
 - (id) enclosingRangeWithCorrectionIndicator;
 - (id) positionAtStartOrEndOfWord;
 - (void) setAffinity:(int)a;
 - ({VisiblePosition={Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}i}) _visiblePosition;
 - (int) textDirection;
 - (id) positionByMovingInDirection:(int)aamount:(unsigned int)bwithAffinityDownstream:(BOOL)c;
 - (BOOL) directionIsDownstream:(int)a;
 - (BOOL) isEditable;
 - (BOOL) requiresContextForWordBoundary;
 - (BOOL) atAlphaNumericBoundaryInDirection:(int)a;
 - (id) enclosingRangeWithDictationPhraseAlternatives:(^@)a;


@end
