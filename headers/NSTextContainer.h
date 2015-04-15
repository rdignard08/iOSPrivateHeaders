
@protocol NSCoding, NSTextLayoutOrientationProvider;
@interface NSTextContainer : NSObject <NSCoding, NSTextLayoutOrientationProvider> {

    @"NSLayoutManager" _layoutManager;
    id _textView;
    {CGSize="width"d"height"d} _size;
    double _lineFragmentPadding;
    unsigned long long _maximumLines;
    {__tcFlags="widthTracksTextView"b1"heightTracksTextView"b1"observingFrameChanges"b1"lineBreakMode"b4"oldAPI"b1"_reserved"b8} _tcFlags;
    @"NSArray" _exclusionPaths;
    ^{CGPath=} _cachedBoundingPath;
    ^{__CFArray=} _cachedClippingAttributes;
    ^{__CFArray=} _cachedBounds;
    double _cacheBoundsMinY;
    double _cacheBoundsMaxY;
    double _minimumWidth;
    long long _layoutOrientation;
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
 - (void) setLayoutOrientation:(long long)a;
 - (BOOL) widthTracksTextView;
 - (BOOL) heightTracksTextView;
 - (void) setExclusionPaths:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (long long) layoutOrientation;
 - (double) lineFragmentPadding;
 - ({CGSize=dd}) containerSize;
 - (id) textView;
 - (id) layoutManager;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) lineFragmentRectForProposedRect:({CGRect={CGPoint=dd}{CGSize=dd}})aremainingRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) _commonInit;
 - (void) setLayoutManager:(id)a;
 - ({CGPoint=dd}) textContainerOrigin;
 - (BOOL) isSimpleRectangularTextContainer;
 - (unsigned long long) maximumNumberOfLines;
 - (void) setMaximumNumberOfLines:(unsigned long long)a;
 - (void) setSize:({CGSize=dd})a;
 - (void) setLineFragmentPadding:(double)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) lineFragmentRectForProposedRect:({CGRect={CGPoint=dd}{CGSize=dd}})aatIndex:(unsigned long long)bwritingDirection:(long long)cremainingRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})d;
 - (id) initWithSize:({CGSize=dd})a;
 - (void) setWidthTracksTextView:(BOOL)a;
 - (void) setHeightTracksTextView:(BOOL)a;
 - (void) _resizeAccordingToTextView:(id)a;
 - (double) minimumLineFragmentWidth;
 - (id) exclusionPaths;
 - (id) initWithContainerSize:({CGSize=dd})a;
 - (void) replaceLayoutManager:(id)a;
 - (void) setContainerSize:({CGSize=dd})a;
 - (id) attributesForExtraLineFragment;
 - (void) setMinimumLineFragmentWidth:(double)a;
 - (long long) lineBreakMode;
 - (void) setLineBreakMode:(long long)a;


@end
