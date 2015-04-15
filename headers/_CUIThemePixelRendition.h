
@interface _CUIThemePixelRendition : CUIThemeRendition {

    unsigned int nimages;
    [16^{CGImage}] image;
    ^{CGImage=} unslicedImage;
    @"CUIRenditionMetrics" _renditionMetrics;
    @"CUIRenditionSliceInformation" _sliceInformation;
    @"_CSIRenditionBlockData" _cachedBlockDataBGRX;
    @"_CSIRenditionBlockData" _cachedBlockDataRGBX;
    unsigned long long _sourceRowbytes;
}

 - (void) dealloc;
 - (BOOL) isTiled;
 - (id) imageForSliceIndex:(long long)a;
 - (BOOL) isScaled;
 - (id) maskForSliceIndex:(long long)a;
 - (^{CGImage=}) unslicedImage;
 - (id) metrics;
 - (id) sliceInformation;
 - (id) initWithCSIData:(id)aforKey:(r^{_renditionkeytoken=SS})bartworkStatus:(long long)c;
 - (unsigned long long) sourceRowbytes;
 - (id) _initWithCSIHeader:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})a;
 - (^{CGImage=}) newImageFromCSIDataSlice:({_slice=IIII})aofBitmap:(^{_csibitmap=I(?=I{_csibitmapflags=b1b1b30})II[0C]})busingColorspace:(^{CGColorSpace=})c;
 - (id) copySharedBlockDataWithPixelFormat:(int)a;
 - (void) setSharedBlockData:(id)a;


@end
