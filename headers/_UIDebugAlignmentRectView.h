
@interface _UIDebugAlignmentRectView : UIView {

    double _baselineOffset;
}

 - (void) doesNotRecognizeSelector:(SEL)a ;
 - (id) _alignmentDebuggingOverlayCreateIfNecessary:(BOOL)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a baselineOffset:(double)b ;
 - (BOOL) isOpaque;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
