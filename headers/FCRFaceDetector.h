
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

 - (id) initWithOptions:(id)a;
 - (void) dealloc;
 - (id) version;
 - (id) detectFacesInData:(id)awidth:(unsigned long long)bheight:(unsigned long long)cbytesPerRow:(unsigned long long)doptions:(id)eerror:(^@)f;
 - (id) extractDetailsForFaces:(id)ainData:(id)bwidth:(unsigned long long)cheight:(unsigned long long)dbytesPerRow:(unsigned long long)eoptions:(id)ferror:(^@)g;
 - (id) initWithProfile:(int)aparameters:(id)b;
 - (void) createFaceCoreLightApiWithProfile:(int)aparameters:(id)b;
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
 - (float) interpretAsFloat:(id)awithDefault:(float)b;
 - ({CGPoint=dd}) makeYFlippedPointFromCoord:(^{coord=ii})aimage:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) makeYFlippedRectFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})aimage:(id)b;
 - (void) addLandmarkOfType:(id)afromMesh:(^{vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> >=^{coord}^{coord}{__compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> >=^{coord}}})bindexes:(id)cto:(id)dimage:(id)e;
 - (id) parseOption:(id)avalue:(id)b;
 - (id) parseNumericOrBoolValue:(id)a;
 - (id) transformROIs:(id)aimage:(id)busingBlock:(@?)c;
 - (id) detectFacesInCGImage:(^{CGImage=})aoptions:(id)berror:(^@)c;
 - (id) extractDetailsForFaces:(id)ainCGImage:(^{CGImage=})boptions:(id)cerror:(^@)d;
 - (float) compareFace:(id)atoFace:(id)berror:(^@)c;


@end
