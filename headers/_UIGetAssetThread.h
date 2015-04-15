
@interface _UIGetAssetThread : NSThread {

    NSURL* _url;
    ALAssetsLibrary* _library;
    NSCondition* _condition;
    ALAsset* _asset;
}

 - (void) main;
 - (void) dealloc;
 - (void) setAsset:(id)a;
 - (id) initWithURL:(id)aassetsLibrary:(id)b;
 - (void) setCondition:(id)a;
 - (id) condition;
 - (id) asset;


@end
