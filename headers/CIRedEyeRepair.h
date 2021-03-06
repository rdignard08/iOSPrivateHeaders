
@interface CIRedEyeRepair : NSObject {

    BOOL ownLF;
    ^{?=[256c][32c]{?=*iiiiiiif}ii{?=iiii}^{CGColorSpace}IiiBf} lf;
    int imageSourceType;
    ^{CGImageBlockSet=} blockSet;
    ^v releaseMe;
    ^{__CFData=} dataRef;
    NSArray* faces;
    int nRepairs;
    int nextRepairTag;
    [32{?="tag"i"pt2"{CGPoint="x"d"y"d}"eyeCase"i"forceCase"i"npixels"i"bignpixels"i"fullNew"{?="baseAddress"*"width"i"height"i"rowSamples"i"rowBytes"i"size"i"samplesPerPixel"i"bytesPerSample"i"resolution"f}"YR"{?="minrow"i"maxrow"i"mincol"i"maxcol"i}"psTemplate"{?="lo"i"med"i"hi"i"average"i}"pupilShadeAlignment"B"matchingTemplate"{?="lo"i"med"i"hi"i"average"i}"faceIndex"i"left"B"IOD"f"data"{?="origHitX"i"origHitY"i"snapHitX"i"snapHitY"i"bitmaskSeedX"i"bitmaskSeedY"i"bitmaskThreshold"i"cornealReflectionSeedX"i"cornealReflectionSeedY"i"cornealReflectionThreshold"i"align"B"mTemplate"{?="lo"i"med"i"hi"i"average"i}"existingTemplate"{?="lo"i"med"i"hi"i"average"i}"averageSkinMapY"i"characterizeCase"i"finalEyeCase"i"IOD"f"O"{?="orientation"i"SNR"f"N90"B"redBitmaskArea"i"imageCenterX"f"imageCenterY"f"halfDiagonalSize"f}"CR"{?="minrow"i"maxrow"i"mincol"i"maxcol"i}}"BI"{?="centroid"{CGPoint="x"d"y"d}"area"i"ovalness"f"contrast"f"mincontrast"f"nborder"i"IR"{?="minrow"i"maxrow"i"mincol"i"maxcol"i}"aspectRatio"f"touchingEdge"B"localmax"i"localmaxrow"i"localmaxcol"i"localfloor"i"rgmean"f"rgstd"f"ymean"f"ystd"f}}] repairs;
    int lastRepairTag;
    float lastRepairIOD;
    {?="lo"i"med"i"hi"i"average"i} standardTemplate;
    int iFaceIndex;
    BOOL iLeft;
    BOOL debugRedEye;
    BOOL logRepairs;
    int redEyeThresholdKind;
    BOOL renderAlpha;
    BOOL infillBackground;
    BOOL renderSpecularShine;
    float specularSize;
    float specularSoftness;
    BOOL pupilShadeAlignment;
    BOOL autoPupilTonality;
    BOOL forceLoValue;
    int loValue;
    {?="baseAddress"*"width"i"height"i"rowSamples"i"rowBytes"i"size"i"samplesPerPixel"i"bytesPerSample"i"resolution"f} lastClickYBitmap;
    {?="baseAddress"*"width"i"height"i"rowSamples"i"rowBytes"i"size"i"samplesPerPixel"i"bytesPerSample"i"resolution"f} lastClickCbCrBitmap;
    int lastClickBitmapMinX;
    int lastClickBitmapMaxX;
    int lastClickBitmapMinY;
    int lastClickBitmapMaxY;
    [3{?="baseAddress"*"width"i"height"i"rowSamples"i"rowBytes"i"size"i"samplesPerPixel"i"bytesPerSample"i"resolution"f}] lastClickYBitmaps;
    [3{?="baseAddress"*"width"i"height"i"rowSamples"i"rowBytes"i"size"i"samplesPerPixel"i"bytesPerSample"i"resolution"f}] lastClickCbCrBitmaps;
    [3{?="minrow"i"maxrow"i"mincol"i"maxcol"i}] lastClickIRects;
    {?="baseAddress"*"width"i"height"i"rowSamples"i"rowBytes"i"size"i"samplesPerPixel"i"bytesPerSample"i"resolution"f} lastSearchYBitmap;
    {?="baseAddress"*"width"i"height"i"rowSamples"i"rowBytes"i"size"i"samplesPerPixel"i"bytesPerSample"i"resolution"f} lastSearchCbCrBitmap;
    int lastSearchBitmapMinX;
    int lastSearchBitmapMaxX;
    int lastSearchBitmapMinY;
    int lastSearchBitmapMaxY;
    int nPolyPoints;
    BOOL polyClosed;
    [20{CGPoint="x"d"y"d}] polyPoints;
    [20{?="a"f"b"f"c"f}] polyLines;
    [20B] polyPointConcave;
    [65536C] CbCrDistanceTable;
    int nLinears;
    [8[3i]] linearCoefficients;
}
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) supportRectangleWithFaceArray:(id)aimageSize:({CGSize=dd})b;
 + (float) upperRepairDistance:(float)a;
 + (float) upperRepairDistanceFraction:(float)a;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) supportRectangleWithPoint:({CGPoint=dd})aimageSize:({CGSize=dd})bIOD:(float)c;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) supportRectangleWithRepair:(id)aimageSize:({CGSize=dd})b;

 - (int) format;
 - (void) dealloc;
 - (void) setLeft:(BOOL)a ;
 - (id) initWithExternalBuffer:(char*)a subRectangle:({CGRect={CGPoint=dd}{CGSize=dd}})b fullSize:({CGSize=dd})c rowBytes:(unsigned long long)d cameraModel:(id)e ;
 - (void) autoRepairWithFaceArray:(id)a ;
 - (id) repairArray;
 - (void) executeRepairArray:(id)a ;
 - (void) repairExternalBuffer;
 - (BOOL) getBlockSetWithImage:(^{CGImage=})a into:(^{?=*iiiiiiif})b width:(unsigned long long)c height:(unsigned long long)d ;
 - (BOOL) getDataProviderBytePtrWithImage:(^{CGImage=})a into:(^{?=*iiiiiiif})b width:(unsigned long long)c height:(unsigned long long)d ;
 - (BOOL) getDataProviderCopyWithImage:(^{CGImage=})a into:(^{?=*iiiiiiif})b ;
 - (id) initWithDeskView:(id)a andFrame:(^{?=[256c][32c]{?=*iiiiiiif}ii{?=iiii}^{CGColorSpace}IiiBf})b ;
 - (void) skinInit;
 - (void) initializeNonDebugVariables;
 - (id) initWithFrameExternalBuffer:(^{?=[256c][32c]{?=*iiiiiiif}ii{?=iiii}^{CGColorSpace}IiiBf})a ;
 - (^{?=i{CGPoint=dd}iiii{?=*iiiiiiif}{?=iiii}{?=iiii}B{?=iiii}iBf{?=iiiiiiiiiiB{?=iiii}{?=iiii}iiif{?=ifBifff}{?=iiii}}{?={CGPoint=dd}ifffi{?=iiii}fBiiiiffff}}) repairWithTag:(int)a ;
 - (float) upperRepairSizeFraction:(float)a ;
 - (float) lowerRepairSizeFraction:(float)a ;
 - (float) lowerRepairSize:(float)a ;
 - (float) upperRepairSize:(float)a ;
 - (BOOL) extractReusableAlignedBitmapsAroundPoint:(^{?=*iiiiiiif})a YR:({?=iiii})b subYBitmap:(^{?=*iiiiiiif})c subCbCrBitmap:(^{?=*iiiiiiif})d ;
 - (int) averageValueFromY:(^{?=*iiiiiiif})a withinSkinMask:(^{?=*iiiiiiif})b butOutsideAlpha:(^{?=*iiiiiiif})c ;
 - (BOOL) computeTrimmedBitmaps:(^{?=*iiiiiiif})a newY:(^{?=*iiiiiiif})b newCbCr:(^{?=*iiiiiiif})c IR:({?=iiii})d newTrimY:(^{?=*iiiiiiif})e newTrimCbCr:(^{?=*iiiiiiif})f returningYR:(^{?=iiii})g andCbCrR:(^{?=iiii})h ;
 - (void) undoRepair:(int)a ;
 - (int) redEyeRemovalWithPoint:({CGPoint=dd})a alignPupilShades:(BOOL)b matching:({?=iiii})c force:(int)d IOD:(float)e tap:(BOOL)f ;
 - (int) redoRepairWithTag:(int)a IOD:(float)b ;
 - (void) insertIntoProminenceVettingHopper:(^{?=i[4{?=fiifffiif}]})a max:(int)b outside:(int)c confidence:(float)d distance:(float)e row:(int)f column:(int)g IOD:(float)h ;
 - (BOOL) gatherProminencesWithC:(^{?=*iiiiiiif})a MC:(^{?=*iiiiiiif})b altC:(^{?=*iiiiiiif})c altMC:(^{?=*iiiiiiif})d maxwindowsize:(int)e repairsize:(int)f IR:({?=iiii})g fr:(^{?=Biiffiiiiffiifiiiiiifiiii})h intoHopper:(^{?=i[4{?=fiifffiif}]})i faceIndex:(int)j left:(BOOL)k ;
 - (float) extractAverageFaceY:(^{?=Biiffiiiiffiifiiiiiifiiii})a contrast:(^f)b faceIndex:(int)c ;
 - (float) confidenceWithIOD:(float)a repair:(int)b andProminenceDifference:(int)c ;
 - (int) distanceMaskFromPolyToCb:(int)a Cr:(int)b ;
 - (void) prepareLineFunctions;
 - (void) autoRepairExtractAndSearchLeft:({?=iiii})a right:({?=iiii})b data:(^{?=Biiffiiiiffiifiiiiiifiiii})c repairSize:(float)d autoPupilTonality:(BOOL)e faceIndex:(int)f ;
 - (BOOL) getFloat:(^f)a d:(id)b s:(id)c ;
 - (BOOL) getInt:(^i)a d:(id)b s:(id)c ;
 - (BOOL) getBool:(^B)a d:(id)b s:(id)c ;
 - (int) redEyeRemovalWithData:({?=iiiiiiiiiiB{?=iiii}{?=iiii}iiif{?=ifBifff}{?=iiii}})a ;
 - (void) executeRepair:(id)a ;
 - (id) initWithCGImage:(^{CGImage=})a cameraModel:(id)b ;
 - (^{CGImage=}) createRepairedImage;
 - (id) initWithExternalBuffer:(char*)a size:({CGSize=dd})b rowBytes:(unsigned long long)c ;
 - (BOOL) debug;
 - (void) setDebug:(BOOL)a ;
 - (BOOL) logRepairs;
 - (void) setLogRepairs:(BOOL)a ;
 - (int) redEyeThresholdKind;
 - (void) setRedEyeThresholdKind:(int)a ;
 - (BOOL) renderAlpha;
 - (void) setRenderAlpha:(BOOL)a ;
 - (BOOL) infillBackground;
 - (void) setInfillBackground:(BOOL)a ;
 - (BOOL) renderSpecularShine;
 - (void) setRenderSpecularShine:(BOOL)a ;
 - (float) specularSize;
 - (void) setSpecularSize:(float)a ;
 - (float) specularSoftness;
 - (void) setSpecularSoftness:(float)a ;
 - (BOOL) pupilShadeAlignment;
 - (void) setPupilShadeAlignment:(BOOL)a ;
 - (BOOL) autoPupilTonality;
 - (void) setAutoPupilTonality:(BOOL)a ;
 - (BOOL) forceLoValue;
 - (void) setForceLoValue:(BOOL)a ;
 - (int) loValue;
 - (void) setLoValue:(int)a ;
 - ({?=iiii}) standardTemplate;
 - (id) faces;
 - (^{?=i{CGPoint=dd}iiii{?=*iiiiiiif}{?=iiii}{?=iiii}B{?=iiii}iBf{?=iiiiiiiiiiB{?=iiii}{?=iiii}iiif{?=ifBifff}{?=iiii}}{?={CGPoint=dd}ifffi{?=iiii}fBiiiiffff}}) repairs;
 - (int) nRepairs;
 - (int) lastRepairTag;
 - (void) redoLastRepair;
 - (void) setFaceIndex:(int)a ;
 - (void) setColorSpace:(^{CGColorSpace=})a ;


@end
