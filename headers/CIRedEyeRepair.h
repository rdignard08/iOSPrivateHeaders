
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
 - (void) setLeft:(BOOL)a;
 - (id) initWithExternalBuffer:(char*)asubRectangle:({CGRect={CGPoint=dd}{CGSize=dd}})bfullSize:({CGSize=dd})crowBytes:(unsigned long long)dcameraModel:(id)e;
 - (void) autoRepairWithFaceArray:(id)a;
 - (id) repairArray;
 - (void) executeRepairArray:(id)a;
 - (void) repairExternalBuffer;
 - (BOOL) getBlockSetWithImage:(^{CGImage=})ainto:(^{?=*iiiiiiif})bwidth:(unsigned long long)cheight:(unsigned long long)d;
 - (BOOL) getDataProviderBytePtrWithImage:(^{CGImage=})ainto:(^{?=*iiiiiiif})bwidth:(unsigned long long)cheight:(unsigned long long)d;
 - (BOOL) getDataProviderCopyWithImage:(^{CGImage=})ainto:(^{?=*iiiiiiif})b;
 - (id) initWithDeskView:(id)aandFrame:(^{?=[256c][32c]{?=*iiiiiiif}ii{?=iiii}^{CGColorSpace}IiiBf})b;
 - (void) skinInit;
 - (void) initializeNonDebugVariables;
 - (id) initWithFrameExternalBuffer:(^{?=[256c][32c]{?=*iiiiiiif}ii{?=iiii}^{CGColorSpace}IiiBf})a;
 - (^{?=i{CGPoint=dd}iiii{?=*iiiiiiif}{?=iiii}{?=iiii}B{?=iiii}iBf{?=iiiiiiiiiiB{?=iiii}{?=iiii}iiif{?=ifBifff}{?=iiii}}{?={CGPoint=dd}ifffi{?=iiii}fBiiiiffff}}) repairWithTag:(int)a;
 - (float) upperRepairSizeFraction:(float)a;
 - (float) lowerRepairSizeFraction:(float)a;
 - (float) lowerRepairSize:(float)a;
 - (float) upperRepairSize:(float)a;
 - (BOOL) extractReusableAlignedBitmapsAroundPoint:(^{?=*iiiiiiif})aYR:({?=iiii})bsubYBitmap:(^{?=*iiiiiiif})csubCbCrBitmap:(^{?=*iiiiiiif})d;
 - (int) averageValueFromY:(^{?=*iiiiiiif})awithinSkinMask:(^{?=*iiiiiiif})bbutOutsideAlpha:(^{?=*iiiiiiif})c;
 - (BOOL) computeTrimmedBitmaps:(^{?=*iiiiiiif})anewY:(^{?=*iiiiiiif})bnewCbCr:(^{?=*iiiiiiif})cIR:({?=iiii})dnewTrimY:(^{?=*iiiiiiif})enewTrimCbCr:(^{?=*iiiiiiif})freturningYR:(^{?=iiii})gandCbCrR:(^{?=iiii})h;
 - (void) undoRepair:(int)a;
 - (int) redEyeRemovalWithPoint:({CGPoint=dd})aalignPupilShades:(BOOL)bmatching:({?=iiii})cforce:(int)dIOD:(float)etap:(BOOL)f;
 - (int) redoRepairWithTag:(int)aIOD:(float)b;
 - (void) insertIntoProminenceVettingHopper:(^{?=i[4{?=fiifffiif}]})amax:(int)boutside:(int)cconfidence:(float)ddistance:(float)erow:(int)fcolumn:(int)gIOD:(float)h;
 - (BOOL) gatherProminencesWithC:(^{?=*iiiiiiif})aMC:(^{?=*iiiiiiif})baltC:(^{?=*iiiiiiif})caltMC:(^{?=*iiiiiiif})dmaxwindowsize:(int)erepairsize:(int)fIR:({?=iiii})gfr:(^{?=Biiffiiiiffiifiiiiiifiiii})hintoHopper:(^{?=i[4{?=fiifffiif}]})ifaceIndex:(int)jleft:(BOOL)k;
 - (float) extractAverageFaceY:(^{?=Biiffiiiiffiifiiiiiifiiii})acontrast:(^f)bfaceIndex:(int)c;
 - (float) confidenceWithIOD:(float)arepair:(int)bandProminenceDifference:(int)c;
 - (int) distanceMaskFromPolyToCb:(int)aCr:(int)b;
 - (void) prepareLineFunctions;
 - (void) autoRepairExtractAndSearchLeft:({?=iiii})aright:({?=iiii})bdata:(^{?=Biiffiiiiffiifiiiiiifiiii})crepairSize:(float)dautoPupilTonality:(BOOL)efaceIndex:(int)f;
 - (BOOL) getFloat:(^f)ad:(id)bs:(id)c;
 - (BOOL) getInt:(^i)ad:(id)bs:(id)c;
 - (BOOL) getBool:(^B)ad:(id)bs:(id)c;
 - (int) redEyeRemovalWithData:({?=iiiiiiiiiiB{?=iiii}{?=iiii}iiif{?=ifBifff}{?=iiii}})a;
 - (void) executeRepair:(id)a;
 - (id) initWithCGImage:(^{CGImage=})acameraModel:(id)b;
 - (^{CGImage=}) createRepairedImage;
 - (id) initWithExternalBuffer:(char*)asize:({CGSize=dd})browBytes:(unsigned long long)c;
 - (BOOL) debug;
 - (void) setDebug:(BOOL)a;
 - (BOOL) logRepairs;
 - (void) setLogRepairs:(BOOL)a;
 - (int) redEyeThresholdKind;
 - (void) setRedEyeThresholdKind:(int)a;
 - (BOOL) renderAlpha;
 - (void) setRenderAlpha:(BOOL)a;
 - (BOOL) infillBackground;
 - (void) setInfillBackground:(BOOL)a;
 - (BOOL) renderSpecularShine;
 - (void) setRenderSpecularShine:(BOOL)a;
 - (float) specularSize;
 - (void) setSpecularSize:(float)a;
 - (float) specularSoftness;
 - (void) setSpecularSoftness:(float)a;
 - (BOOL) pupilShadeAlignment;
 - (void) setPupilShadeAlignment:(BOOL)a;
 - (BOOL) autoPupilTonality;
 - (void) setAutoPupilTonality:(BOOL)a;
 - (BOOL) forceLoValue;
 - (void) setForceLoValue:(BOOL)a;
 - (int) loValue;
 - (void) setLoValue:(int)a;
 - ({?=iiii}) standardTemplate;
 - (id) faces;
 - (^{?=i{CGPoint=dd}iiii{?=*iiiiiiif}{?=iiii}{?=iiii}B{?=iiii}iBf{?=iiiiiiiiiiB{?=iiii}{?=iiii}iiif{?=ifBifff}{?=iiii}}{?={CGPoint=dd}ifffi{?=iiii}fBiiiiffff}}) repairs;
 - (int) nRepairs;
 - (int) lastRepairTag;
 - (void) redoLastRepair;
 - (void) setFaceIndex:(int)a;
 - (void) setColorSpace:(^{CGColorSpace=})a;


@end
