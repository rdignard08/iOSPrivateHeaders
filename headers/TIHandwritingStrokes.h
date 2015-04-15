
@protocol NSCopying, NSSecureCoding;
@interface TIHandwritingStrokes : NSObject <NSCopying, NSSecureCoding> {

    {vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > >="__begin_"^{vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >}"__end_"^{vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >}"__end_cap_"{__compressed_pair<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > *, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > >="__first_"^{vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >}}} _strokes;
    BOOL _continuePreviousStroke;
}
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (unsigned long long) numberOfStrokes;
 - (void) addPoint:({CGPoint=dd})a ;
 - (unsigned long long) numberOfPointsInStrokeAtIndex:(unsigned long long)a ;
 - ({CGPoint=dd}) pointAtIndex:(unsigned long long)a inStrokeAtIndex:(unsigned long long)b ;
 - (void) removeStrokeAtIndex:(unsigned long long)a ;
 - (void) endStroke;
 - (void) removeAllStrokes;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (unsigned long long) totalNumberOfPoints;


@end
