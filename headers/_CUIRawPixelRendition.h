
@interface _CUIRawPixelRendition : CUIThemeRendition {

    I _nimages;
    [16^{CGImage}] _image;
    ^{CGImage=} _unslicedImage;
    @"CUIRenditionMetrics" _renditionMetrics;
    @"CUIRenditionSliceInformation" _sliceInformation;
}

 - (void) dealloc;
 - (id) imageForSliceIndex:(q)a;
 - (BOOL) isScaled;
 - (id) maskForSliceIndex:(q)a;
 - (^{CGImage=}) unslicedImage;
 - (id) metrics;
 - (id) sliceInformation;
 - (id) initWithCSIData:(id)aforKey:(r^{_renditionkeytoken=SS})bartworkStatus:(q)c;
 - (id) _initWithCSIHeader:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})a;


@end
