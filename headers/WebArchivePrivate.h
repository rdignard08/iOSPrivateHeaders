
@interface WebArchivePrivate : NSObject {

    WebResource* cachedMainResource;
    NSArray* cachedSubresources;
    NSArray* cachedSubframeArchives;
    m_ptr* coreArchive;
}
 + (void) initialize;

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (id) init;
 - (id) initWithCoreArchive:({PassRefPtr<WebCore::LegacyWebArchive>=^{LegacyWebArchive}})a ;
 - (^{LegacyWebArchive=^^?I{RefPtr<WebCore::ArchiveResource>=^{ArchiveResource}}{Vector<WTF::RefPtr<WebCore::ArchiveResource>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::ArchiveResource>}II}{Vector<WTF::RefPtr<WebCore::Archive>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::Archive>}II}}) coreArchive;
 - (void) setCoreArchive:({PassRefPtr<WebCore::LegacyWebArchive>=^{LegacyWebArchive}})a ;


@end
