
@interface NSLayoutManagerTextBlockRowArrayCache : NSObject {

    {_NSRange="location"Q"length"Q} _rowCharRange;
    double _containerWidth;
    NSArray* _rowArray;
    BOOL _collapseBorders;
}

 - (void) dealloc;
 - (id) initWithRowCharRange:({_NSRange=QQ})a containerWidth:(double)b rowArray:(id)c collapseBorders:(BOOL)d ;


@end
