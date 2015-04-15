
@interface CIFaceCoreDetector : CIDetector {

    @"CIContext" context;
    @"NSMutableDictionary" featureOptions;
    @"FCRFaceDetector" faceCoreDetector;
}

 - (void) dealloc;
 - (void) finalize;
 - (void) setContext:(id)a;
 - (id) featuresInImage:(id)aoptions:(id)b;
 - (id) initWithContext:(id)aoptions:(id)b;
 - (id) featuresInImage:(id)a;
 - (id) adjustedImageFromImage:(id)aorientation:(i)binverseCTM:(^{CGAffineTransform=dddddd})c;
 - (id) createFaceCoreDataFromCIImage:(id)awidth:(^Q)bheight:(^Q)c;
 - (id) faceCoreDetector;
 - (void) setFaceCoreDetector:(id)a;
 - ({CGAffineTransform=dddddd}) ctmForImageWithBounds:({CGRect={CGPoint=dd}{CGSize=dd}})aorientation:(i)b;
 - (id) context;


@end
