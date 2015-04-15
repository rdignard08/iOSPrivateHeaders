
@protocol NSURLConnectionDelegate;
@interface WebResourceLoaderQuickLookDelegate : NSObject <NSURLConnectionDelegate> {

    {RefPtr<WebCore::ResourceLoader>="m_ptr"^{ResourceLoader}} _resourceLoader;
    BOOL _hasSentDidReceiveResponse;
    BOOL _hasFailed;
    ^{QuickLookHandle={RetainPtr<NSURL>=^v}{RetainPtr<QLPreviewConverter>=^v}{RetainPtr<id>=^v}B{RetainPtr<NSFileHandle *>=^v}{RetainPtr<NSURLResponse>=^v}{RefPtr<WebCore::QuickLookHandleClient>=^{QuickLookHandleClient}}} _quickLookHandle;
}
@property (nonatomic, assign, readwrite) NSNumber* quickLookHandle;

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) connection:(id)adidFailWithError:(id)b;
 - (void) connection:(id)adidReceiveData:(id)blengthReceived:(long long)c;
 - (void) connectionDidFinishLoading:(id)a;
 - (void) connection:(id)adidReceiveDataArray:(id)b;
 - (void) clearHandle;
 - (void) _sendDidReceiveResponseIfNecessary;
 - (id) initWithResourceLoader:({PassRefPtr<WebCore::ResourceLoader>=^{ResourceLoader}})a;
 - (^{QuickLookHandle={RetainPtr<NSURL>=^v}{RetainPtr<QLPreviewConverter>=^v}{RetainPtr<id>=^v}B{RetainPtr<NSFileHandle *>=^v}{RetainPtr<NSURLResponse>=^v}{RefPtr<WebCore::QuickLookHandleClient>=^{QuickLookHandleClient}}}) quickLookHandle;
 - (void) setQuickLookHandle:(^{QuickLookHandle={RetainPtr<NSURL>=^v}{RetainPtr<QLPreviewConverter>=^v}{RetainPtr<id>=^v}B{RetainPtr<NSFileHandle *>=^v}{RetainPtr<NSURLResponse>=^v}{RefPtr<WebCore::QuickLookHandleClient>=^{QuickLookHandleClient}}})a;


@end
