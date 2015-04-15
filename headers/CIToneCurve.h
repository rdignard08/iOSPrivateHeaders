
@protocol _CIFilterProperties;
@interface CIToneCurve : CIFilter <_CIFilterProperties> {

    CIImage* inputImage;
    CIVector* inputPoint0;
    CIVector* inputPoint1;
    CIVector* inputPoint2;
    CIVector* inputPoint3;
    CIVector* inputPoint4;
    CIImage* _curveImage;
}
 + (id) customAttributes;
 + (id) curveImageFromPoints:(r^{CGPoint=dd})a;
 + (void) splineCurveTable:(^d)atableSize:(int)bgamma:(double)cfrom:(r^{CGPoint=dd})d;
 + (id) curveImageFromPoints:(r^{CGPoint=dd})alinear:(BOOL)b;

 - (void) dealloc;
 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (BOOL) _isIdentity;
 - (id) _outputProperties;
 - (id) _initFromProperties:(id)a;
 - (void) setInputPoint0:(id)a;
 - (void) setInputPoint1:(id)a;
 - (void) setInputPoint2:(id)a;
 - (void) setInputPoint3:(id)a;
 - (void) setInputPoint4:(id)a;
 - (id) _kernel16;
 - (id) inputPoint0;
 - (id) inputPoint1;
 - (id) inputPoint2;
 - (id) inputPoint3;
 - (id) inputPoint4;


@end
