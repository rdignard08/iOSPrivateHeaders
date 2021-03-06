
@interface CUIPattern : NSObject {

    ^{CGImage=} _patternImage;
    ^{CGPattern=} _pattern;
    double _alpha;
}
@property (nonatomic, assign, readwrite) NSNumber* alpha;

 - (^{CGPattern=}) pattern;
 - (id) description;
 - (void) dealloc;
 - (void) setAlpha:(double)a ;
 - (double) alpha;
 - (^{CGPattern=}) _newPattern;
 - (id) initWithImageRef:(^{CGImage=})a ;
 - (void) setPatternInContext:(^{CGContext=})a ;
 - (^{CGImage=}) patternImageRef;


@end
