
@interface UIMorphingLabelGlyphSet : NSObject {

    UIMorphingLabel* _label;
    NSAttributedString* _attributedString;
    ^{__CTLine=} _line;
    NSMutableArray* _glyphViews;
    unsigned long long _glyphCount;
    ^S _glyphs;
    ^{CGRect={CGPoint=dd}{CGSize=dd}} _glyphFrames;
    ^{CGPoint=dd} _glyphPositions;
    {CGPoint="x"d"y"d} _lineOrigin;
    double _lineWidth;
}
@property (nonatomic, assign, readonly) NSNumber* glyphCount;
@property (nonatomic, assign, readonly) NSNumber* glyphs;
@property (nonatomic, assign, readonly) NSNumber* glyphFrames;
@property (nonatomic, assign, readonly) NSNumber* glyphPositions;
@property (nonatomic, assign, readonly) NSArray* glyphViews;
@property (nonatomic, assign, readonly) NSAttributedString* attributedString;
@property (nonatomic, assign, readonly) NSNumber* lineOrigin;
@property (nonatomic, assign, readonly) NSNumber* lineWidth;

 - (void) dealloc;
 - (void) buildGlyphViews;
 - (id) initWithLabel:(id)a attributedString:(id)b ;
 - (void) removeGlyphs;
 - (void) placeGlyphs;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingRectForGlyphsInRange:({_NSRange=QQ})a ;
 - (unsigned long long) glyphCount;
 - (r^S) glyphs;
 - (r^{CGRect={CGPoint=dd}{CGSize=dd}}) glyphFrames;
 - (r^{CGPoint=dd}) glyphPositions;
 - (id) glyphViews;
 - ({CGPoint=dd}) lineOrigin;
 - (id) attributedString;
 - (double) lineWidth;


@end
