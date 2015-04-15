
@interface CSIHelper : NSObject {

    {_slice="x"I"y"I"width"I"height"I} slice;
    @"NSData" csiData;
    ^{_csibitmap=I(?=I{_csibitmapflags=b1b1b30})II[0C]} bmp;
    int renditionLock;
    @"_CUIThemePixelRendition" rendition;
    @"_CSIRenditionBlockData" sharedBlockDataBGRX;
    @"_CSIRenditionBlockData" sharedBlockDataRGBX;
    @"NSString" blockDataCacheKeyBGRX;
    @"NSString" blockDataCacheKeyRGBX;
    unsigned long long sourceRowbytes;
}



@end
