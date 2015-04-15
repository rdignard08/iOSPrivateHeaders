
@interface _CUIThemePixelRendition : CUIThemeRendition {

    I nimages;
    [16^{CGImage}] image;
    ^{CGImage=} unslicedImage;
    @"CUIRenditionMetrics" _renditionMetrics;
    @"CUIRenditionSliceInformation" _sliceInformation;
    @"_CSIRenditionBlockData" _cachedBlockDataBGRX;
    @"_CSIRenditionBlockData" _cachedBlockDataRGBX;
    Q _sourceRowbytes;
}

 - (void) dealloc;
 - (BOOL) isTiled;
 - (id) imageForSliceIndex:(q)a;
 - (BOOL) isScaled;
 - (id) maskForSliceIndex:(q)a;
 - (^{CGImage=}) unslicedImage;
 - (id) metrics;
 - (id) sliceInformation;
 - (id) initWithCSIData:(id)aforKey:(r^{_renditionkeytoken=SS})bartworkStatus:(q)c;
 - (Q) sourceRowbytes;
 - (id) _initWithCSIHeader:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})a;
 - (^{CGImage=}) newImageFromCSIDataSlice:({_slice=IIII})aofBitmap:(^{_csibitmap=I(?=I{_csibitmapflags=b1b1b30})II[0C]})busingColorspace:(^{CGColorSpace=})c;
 - (id) copySharedBlockDataWithPixelFormat:(i)a;
 - (void) setSharedBlockData:(id)a;


@end
