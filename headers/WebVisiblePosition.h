
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
 - (q) compare:(id)a;
 - (i) affinity;
 - (BOOL) atBoundaryOfGranularity:(i)ainDirection:(i)b;
 - (id) enclosingTextUnitOfGranularity:(i)ainDirectionIfAtBoundary:(i)b;
 - (id) positionOfNextBoundaryOfGranularity:(i)ainDirection:(i)b;
 - (i) distanceFromPosition:(id)a;
 - (id) positionByMovingInDirection:(i)aamount:(I)b;
 - (BOOL) withinTextUnitOfGranularity:(i)ainDirectionIfAtBoundary:(i)b;
 - (id) enclosingRangeWithCorrectionIndicator;
 - (id) positionAtStartOrEndOfWord;
 - (void) setAffinity:(i)a;
 - ({VisiblePosition={Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}i}) _visiblePosition;
 - (i) textDirection;
 - (id) positionByMovingInDirection:(i)aamount:(I)bwithAffinityDownstream:(BOOL)c;
 - (BOOL) directionIsDownstream:(i)a;
 - (BOOL) isEditable;
 - (BOOL) requiresContextForWordBoundary;
 - (BOOL) atAlphaNumericBoundaryInDirection:(i)a;
 - (id) enclosingRangeWithDictationPhraseAlternatives:(^@)a;


@end
