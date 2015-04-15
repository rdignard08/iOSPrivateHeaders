
@interface CIFaceCoreDetector : CIDetector {

    CIContext* context;
    NSMutableDictionary* featureOptions;
    FCRFaceDetector* faceCoreDetector;
}

 - (void) dealloc;
 - (void) finalize;
 - (void) setContext:(id)a ;
 - (id) featuresInImage:(id)a options:(id)b ;
 - (id) initWithContext:(id)a options:(id)b ;
 - (id) featuresInImage:(id)a ;
 - (id) adjustedImageFromImage:(id)a orientation:(int)b inverseCTM:(^{CGAffineTransform=dddddd})c ;
 - (id) createFaceCoreDataFromCIImage:(id)a width:(^Q)b height:(^Q)c ;
 - (id) faceCoreDetector;
 - (void) setFaceCoreDetector:(id)a ;
 - ({CGAffineTransform=dddddd}) ctmForImageWithBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a orientation:(int)b ;
 - (id) context;


@end
