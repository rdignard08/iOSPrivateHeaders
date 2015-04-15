
@protocol NSCoding, NSTextLayoutOrientationProvider;
@interface NSTextContainer : NSObject <NSCoding, NSTextLayoutOrientationProvider> {

    @"NSLayoutManager" _layoutManager;
    id _textView;
    {CGSize="width"d"height"d} _size;
    d _lineFragmentPadding;
    Q _maximumLines;
    {__tcFlags="widthTracksTextView"b1"heightTracksTextView"b1"observingFrameChanges"b1"lineBreakMode"b4"oldAPI"b1"_reserved"b8} _tcFlags;
    @"NSArray" _exclusionPaths;
    ^{CGPath=} _cachedBoundingPath;
    ^{__CFArray=} _cachedClippingAttributes;
    ^{__CFArray=} _cachedBounds;
    d _cacheBoundsMinY;
    d _cacheBoundsMaxY;
    d _minimumWidth;
    q _layoutOrientation;
    @"NSDictionary" _attributesForExtraLineFragment;
}
@property (atomic, assign, readonly) NSNumber* isSimpleRectangularTextContainer;
@property (nonatomic, assign, readwrite) NSLayoutManager* layoutManager;
@property (nonatomic, assign, readwrite) NSNumber* size;
@property (nonatomic, copy, readwrite) NSArray* exclusionPaths;
@property (nonatomic, assign, readwrite) NSNumber* lineBreakMode;
@property (nonatomic, assign, readwrite) NSNumber* lineFragmentPadding;
@property (nonatomic, assign, readwrite) NSNumber* maximumNumberOfLines;
@property (nonatomic, assign, readwrite) NSNumber* widthTracksTextView;
@property (nonatomic, assign, readwrite) NSNumber* heightTracksTextView;
@property (nonatomic, assign, readwrite) NSNumber* layoutOrientation;
 + (void) initialize;

 - ({CGSize=dd}) size;
 - (id) description;
 - (void) dealloc;
 - (void) setTextView:(id)a;
 - (void) coordinateAccess:(@?)a;
 - (void) setAttributesForExtraLineFragment:(id)a;
 - (void) setLayoutOrientation:(q)a;
 - (BOOL) widthTracksTextView;
 - (BOOL) heightTracksTextView;
 - (void) setExclusionPaths:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (q) layoutOrientation;
 - (d) lineFragmentPadding;
 - ({CGSize=dd}) containerSize;
 - (id) textView;
 - (id) layoutManager;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) lineFragmentRectForProposedRect:({CGRect={CGPoint=dd}{CGSize=dd}})aremainingRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) _commonInit;
 - (void) setLayoutManager:(id)a;
 - ({CGPoint=dd}) textContainerOrigin;
 - (BOOL) isSimpleRectangularTextContainer;
 - (Q) maximumNumberOfLines;
 - (void) setMaximumNumberOfLines:(Q)a;
 - (void) setSize:({CGSize=dd})a;
 - (void) setLineFragmentPadding:(d)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) lineFragmentRectForProposedRect:({CGRect={CGPoint=dd}{CGSize=dd}})aatIndex:(Q)bwritingDirection:(q)cremainingRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})d;
 - (id) initWithSize:({CGSize=dd})a;
 - (void) setWidthTracksTextView:(BOOL)a;
 - (void) setHeightTracksTextView:(BOOL)a;
 - (void) _resizeAccordingToTextView:(id)a;
 - (d) minimumLineFragmentWidth;
 - (id) exclusionPaths;
 - (id) initWithContainerSize:({CGSize=dd})a;
 - (void) replaceLayoutManager:(id)a;
 - (void) setContainerSize:({CGSize=dd})a;
 - (id) attributesForExtraLineFragment;
 - (void) setMinimumLineFragmentWidth:(d)a;
 - (q) lineBreakMode;
 - (void) setLineBreakMode:(q)a;


@end
