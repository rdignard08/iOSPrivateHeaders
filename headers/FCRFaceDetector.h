
@interface FCRFaceDetector : NSObject {

    ^v api;
    @"NSObject" lock;
}
 + (i) findProfileInParameters:(id)a;
 + (id) faceDetectorWithOptions:(id)a;
 + (id) faceDetector;
 + (id) fastFaceDetector;
 + (id) preciseFaceDetector;
 + (id) standardTrackingDetector;
 + (id) keypointTrackingDetector;

 - (id) initWithOptions:(id)a;
 - (void) dealloc;
 - (id) version;
 - (id) detectFacesInData:(id)awidth:(Q)bheight:(Q)cbytesPerRow:(Q)doptions:(id)eerror:(^@)f;
 - (id) extractDetailsForFaces:(id)ainData:(id)bwidth:(Q)cheight:(Q)dbytesPerRow:(Q)eoptions:(id)ferror:(^@)g;
 - (id) initWithProfile:(i)aparameters:(id)b;
 - (void) createFaceCoreLightApiWithProfile:(i)aparameters:(id)b;
 - (id) detectFacesInImage:(id)aoptions:(id)berror:(^@)c;
 - (void) setParam:(id)atoValue:(id)bwithDefaultValue:(id)cusingApi:(^{FaceCoreAPI=^^?^{FaceCoreAPIInternal}^{FaceCoreContext}^v})d;
 - (id) parseRegionOfInterestParam:(id)a;
 - (id) convertRectsToString:(id)a;
 - (void) updateDetectionParamsValues:(id)aimage:(id)b;
 - (id) createFCRFace:(^{face=i{coord=ii}{coord=ii}{coord=ii}{coord=ii}fii{vector<double, std::__1::allocator<double> >=^d^d{__compressed_pair<double *, std::__1::allocator<double> >=^d}}i{vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> >=^{coord}^{coord}{__compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> >=^{coord}}}iBBffBfBf^{naturalSmileData}})aimage:(id)b;
 - (id) createFCRImage:(^{CGImage=})a;
 - (id) extractDetailsForFaces:(id)ainImage:(id)boptions:(id)cerror:(^@)d;
 - (void) updateExtractionParamsValues:(id)a;
 - ({image=*ii}) createImage:(id)a;
 - ({face=i{coord=ii}{coord=ii}{coord=ii}{coord=ii}fii{vector<double, std::__1::allocator<double> >=^d^d{__compressed_pair<double *, std::__1::allocator<double> >=^d}}i{vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> >=^{coord}^{coord}{__compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> >=^{coord}}}iBBffBfBf^{naturalSmileData}}) createFace:(id)aimage:(id)b;
 - (void) updateFCRFace:(id)afrom:(^{face=i{coord=ii}{coord=ii}{coord=ii}{coord=ii}fii{vector<double, std::__1::allocator<double> >=^d^d{__compressed_pair<double *, std::__1::allocator<double> >=^d}}i{vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> >=^{coord}^{coord}{__compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> >=^{coord}}}iBBffBfBf^{naturalSmileData}})bimage:(id)c;
 - ({coord=ii}) makeYFlippedCoordFromPoint:({CGPoint=dd})aimage:(id)b;
 - (f) interpretAsFloat:(id)awithDefault:(f)b;
 - ({CGPoint=dd}) makeYFlippedPointFromCoord:(^{coord=ii})aimage:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) makeYFlippedRectFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})aimage:(id)b;
 - (void) addLandmarkOfType:(id)afromMesh:(^{vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> >=^{coord}^{coord}{__compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> >=^{coord}}})bindexes:(id)cto:(id)dimage:(id)e;
 - (id) parseOption:(id)avalue:(id)b;
 - (id) parseNumericOrBoolValue:(id)a;
 - (id) transformROIs:(id)aimage:(id)busingBlock:(@?)c;
 - (id) detectFacesInCGImage:(^{CGImage=})aoptions:(id)berror:(^@)c;
 - (id) extractDetailsForFaces:(id)ainCGImage:(^{CGImage=})boptions:(id)cerror:(^@)d;
 - (f) compareFace:(id)atoFace:(id)berror:(^@)c;


@end
