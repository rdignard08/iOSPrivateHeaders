
@interface FCRFaceDetector : NSObject {

    ^v api;
    NSObject* lock;
}
 + (int) findProfileInParameters:(id)a;
 + (id) faceDetectorWithOptions:(id)a;
 + (id) faceDetector;
 + (id) fastFaceDetector;
 + (id) preciseFaceDetector;
 + (id) standardTrackingDetector;
 + (id) keypointTrackingDetector;

 - (id) initWithOptions:(id)a ;
 - (void) dealloc;
 - (id) version;
 - (id) detectFacesInData:(id)a width:(unsigned long long)b height:(unsigned long long)c bytesPerRow:(unsigned long long)d options:(id)e error:(^@)f ;
 - (id) extractDetailsForFaces:(id)a inData:(id)b width:(unsigned long long)c height:(unsigned long long)d bytesPerRow:(unsigned long long)e options:(id)f error:(^@)g ;
 - (id) initWithProfile:(int)a parameters:(id)b ;
 - (void) createFaceCoreLightApiWithProfile:(int)a parameters:(id)b ;
 - (id) detectFacesInImage:(id)a options:(id)b error:(^@)c ;
 - (void) setParam:(id)a toValue:(id)b withDefaultValue:(id)c usingApi:(^{FaceCoreAPI=^^?^{FaceCoreAPIInternal}^{FaceCoreContext}^v})d ;
 - (id) parseRegionOfInterestParam:(id)a ;
 - (id) convertRectsToString:(id)a ;
 - (void) updateDetectionParamsValues:(id)a image:(id)b ;
 - (id) createFCRFace:(^{face=i{coord=ii}{coord=ii}{coord=ii}{coord=ii}fii{vector<double, std::__1::allocator<double> >=^d^d{__compressed_pair<double *, std::__1::allocator<double> >=^d}}i{vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> >=^{coord}^{coord}{__compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> >=^{coord}}}iBBffBfBf^{naturalSmileData}})a image:(id)b ;
 - (id) createFCRImage:(^{CGImage=})a ;
 - (id) extractDetailsForFaces:(id)a inImage:(id)b options:(id)c error:(^@)d ;
 - (void) updateExtractionParamsValues:(id)a ;
 - ({image=*ii}) createImage:(id)a ;
 - ({face=i{coord=ii}{coord=ii}{coord=ii}{coord=ii}fii{vector<double, std::__1::allocator<double> >=^d^d{__compressed_pair<double *, std::__1::allocator<double> >=^d}}i{vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> >=^{coord}^{coord}{__compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> >=^{coord}}}iBBffBfBf^{naturalSmileData}}) createFace:(id)a image:(id)b ;
 - (void) updateFCRFace:(id)a from:(^{face=i{coord=ii}{coord=ii}{coord=ii}{coord=ii}fii{vector<double, std::__1::allocator<double> >=^d^d{__compressed_pair<double *, std::__1::allocator<double> >=^d}}i{vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> >=^{coord}^{coord}{__compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> >=^{coord}}}iBBffBfBf^{naturalSmileData}})b image:(id)c ;
 - ({coord=ii}) makeYFlippedCoordFromPoint:({CGPoint=dd})a image:(id)b ;
 - (float) interpretAsFloat:(id)a withDefault:(float)b ;
 - ({CGPoint=dd}) makeYFlippedPointFromCoord:(^{coord=ii})a image:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) makeYFlippedRectFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})a image:(id)b ;
 - (void) addLandmarkOfType:(id)a fromMesh:(^{vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> >=^{coord}^{coord}{__compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> >=^{coord}}})b indexes:(id)c to:(id)d image:(id)e ;
 - (id) parseOption:(id)a value:(id)b ;
 - (id) parseNumericOrBoolValue:(id)a ;
 - (id) transformROIs:(id)a image:(id)b usingBlock:(@?)c ;
 - (id) detectFacesInCGImage:(^{CGImage=})a options:(id)b error:(^@)c ;
 - (id) extractDetailsForFaces:(id)a inCGImage:(^{CGImage=})b options:(id)c error:(^@)d ;
 - (float) compareFace:(id)a toFace:(id)b error:(^@)c ;


@end
