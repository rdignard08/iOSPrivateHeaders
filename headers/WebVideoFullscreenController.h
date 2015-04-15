
@interface WebVideoFullscreenController : NSObject {

    {RefPtr<WebCore::HTMLMediaElement>="m_ptr"^{HTMLMediaElement}} _mediaElement;
    {RefPtr<WebCore::WebVideoFullscreenInterfaceAVKit>="m_ptr"^{WebVideoFullscreenInterfaceAVKit}} _interface;
    {RefPtr<WebCore::WebVideoFullscreenModelMediaElement>="m_ptr"^{WebVideoFullscreenModelMediaElement}} _model;
    {WebVideoFullscreenControllerChangeObserver="_vptr$WebVideoFullscreenChangeObserver"^^?"_target"@"WebVideoFullscreenController"} _changeObserver;
    {RetainPtr<CALayer>="m_ptr"^v} _videoFullscreenLayer;
}

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (id) init;
 - (void) requestHideAndExitFullscreen;
 - (^{HTMLMediaElement=^^?{Weak<WebCore::JSDOMWrapper>=^{WeakImpl}}iI^{ContainerNode}^{TreeScope}^{Node}^{Node}(DataUnion=^{RenderObject}^{NodeRareDataBase})^{Node}^{Node}{QualifiedName={RefPtr<WebCore::QualifiedName::QualifiedNameImpl>=^{QualifiedNameImpl}}}{RefPtr<WebCore::ElementData>=^{ElementData}}^^?^^?^^?^^?^{ScriptExecutionContext}I^^?^^?^^?^^?^^?^^?{Timer<WebCore::HTMLMediaElement>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}{Timer<WebCore::HTMLMediaElement>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}{Timer<WebCore::HTMLMediaElement>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}{Timer<WebCore::HTMLMediaElement>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}{Timer<WebCore::HTMLMediaElement>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}{RefPtr<WebCore::TimeRanges>=^{TimeRanges}}{GenericEventQueue=^{EventTarget}{Vector<WTF::RefPtr<WebCore::Event>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::Event>}II}{Timer<WebCore::GenericEventQueue>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}B}ddBiii{URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}{RefPtr<WebCore::MediaError>=^{MediaError}}{unique_ptr<WebCore::HTMLMediaElement::PendingSeek, std::__1::default_delete<WebCore::HTMLMediaElement::PendingSeek> >={__compressed_pair<WebCore::HTMLMediaElement::PendingSeek *, std::__1::default_delete<WebCore::HTMLMediaElement::PendingSeek> >=^{PendingSeek}}}dBdIdddi{RefPtr<WebCore::HTMLSourceElement>=^{HTMLSourceElement}}{RefPtr<WebCore::Node>=^{Node}}{RetainPtr<CALayer>=^v}{FloatRect={FloatPoint=ff}{FloatSize=ff}}i{OwnPtr<WebCore::MediaPlayer>=^{MediaPlayer}}iiidddddIiiib1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}fi{RefPtr<WebCore::AudioTrackList>=^{AudioTrackList}}{RefPtr<WebCore::TextTrackList>=^{TextTrackList}}{RefPtr<WebCore::VideoTrackList>=^{VideoTrackList}}{Vector<WTF::RefPtr<WebCore::TextTrack>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::TextTrack>}II}{PODIntervalTree<double, WebCore::TextTrackCue *>=^^?{RefPtr<WebCore::PODFreeListArena<WebCore::PODRedBlackTree<WebCore::PODInterval<double, WebCore::TextTrackCue *> >::Node> >=^{PODFreeListArena<WebCore::PODRedBlackTree<WebCore::PODInterval<double, WebCore::TextTrackCue *> >::Node>}}^{Node}B}{Vector<WebCore::PODInterval<double, WebCore::TextTrackCue *>, 0, WTF::CrashOnOverflow>=^{PODInterval<double, WebCore::TextTrackCue *>}II}i^{MediaElementAudioSourceNode}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{RefPtr<WebCore::MediaController>=^{MediaController}}{unique_ptr<WebCore::DisplaySleepDisabler, std::__1::default_delete<WebCore::DisplaySleepDisabler> >={__compressed_pair<WebCore::DisplaySleepDisabler *, std::__1::default_delete<WebCore::DisplaySleepDisabler> >=^{DisplaySleepDisabler}}}{RefPtr<WebCore::PlatformTextTrackMenuInterface>=^{PlatformTextTrackMenuInterface}}{unique_ptr<WebCore::HTMLMediaSession, std::__1::default_delete<WebCore::HTMLMediaSession> >={__compressed_pair<WebCore::HTMLMediaSession *, std::__1::default_delete<WebCore::HTMLMediaSession> >=^{HTMLMediaSession}}}{unique_ptr<WebCore::PageActivityAssertionToken, std::__1::default_delete<WebCore::PageActivityAssertionToken> >={__compressed_pair<WebCore::PageActivityAssertionToken *, std::__1::default_delete<WebCore::PageActivityAssertionToken> >=^{PageActivityAssertionToken}}}Q{RefPtr<WebCore::MediaControlsHost>=^{MediaControlsHost}}{RefPtr<WebCore::DOMWrapperWorld>=^{DOMWrapperWorld}}}) mediaElement;
 - (void) setMediaElement:(^{HTMLMediaElement=^^?{Weak<WebCore::JSDOMWrapper>=^{WeakImpl}}iI^{ContainerNode}^{TreeScope}^{Node}^{Node}(DataUnion=^{RenderObject}^{NodeRareDataBase})^{Node}^{Node}{QualifiedName={RefPtr<WebCore::QualifiedName::QualifiedNameImpl>=^{QualifiedNameImpl}}}{RefPtr<WebCore::ElementData>=^{ElementData}}^^?^^?^^?^^?^{ScriptExecutionContext}I^^?^^?^^?^^?^^?^^?{Timer<WebCore::HTMLMediaElement>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}{Timer<WebCore::HTMLMediaElement>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}{Timer<WebCore::HTMLMediaElement>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}{Timer<WebCore::HTMLMediaElement>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}{Timer<WebCore::HTMLMediaElement>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}{RefPtr<WebCore::TimeRanges>=^{TimeRanges}}{GenericEventQueue=^{EventTarget}{Vector<WTF::RefPtr<WebCore::Event>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::Event>}II}{Timer<WebCore::GenericEventQueue>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}B}ddBiii{URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}{RefPtr<WebCore::MediaError>=^{MediaError}}{unique_ptr<WebCore::HTMLMediaElement::PendingSeek, std::__1::default_delete<WebCore::HTMLMediaElement::PendingSeek> >={__compressed_pair<WebCore::HTMLMediaElement::PendingSeek *, std::__1::default_delete<WebCore::HTMLMediaElement::PendingSeek> >=^{PendingSeek}}}dBdIdddi{RefPtr<WebCore::HTMLSourceElement>=^{HTMLSourceElement}}{RefPtr<WebCore::Node>=^{Node}}{RetainPtr<CALayer>=^v}{FloatRect={FloatPoint=ff}{FloatSize=ff}}i{OwnPtr<WebCore::MediaPlayer>=^{MediaPlayer}}iiidddddIiiib1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}fi{RefPtr<WebCore::AudioTrackList>=^{AudioTrackList}}{RefPtr<WebCore::TextTrackList>=^{TextTrackList}}{RefPtr<WebCore::VideoTrackList>=^{VideoTrackList}}{Vector<WTF::RefPtr<WebCore::TextTrack>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::TextTrack>}II}{PODIntervalTree<double, WebCore::TextTrackCue *>=^^?{RefPtr<WebCore::PODFreeListArena<WebCore::PODRedBlackTree<WebCore::PODInterval<double, WebCore::TextTrackCue *> >::Node> >=^{PODFreeListArena<WebCore::PODRedBlackTree<WebCore::PODInterval<double, WebCore::TextTrackCue *> >::Node>}}^{Node}B}{Vector<WebCore::PODInterval<double, WebCore::TextTrackCue *>, 0, WTF::CrashOnOverflow>=^{PODInterval<double, WebCore::TextTrackCue *>}II}i^{MediaElementAudioSourceNode}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{RefPtr<WebCore::MediaController>=^{MediaController}}{unique_ptr<WebCore::DisplaySleepDisabler, std::__1::default_delete<WebCore::DisplaySleepDisabler> >={__compressed_pair<WebCore::DisplaySleepDisabler *, std::__1::default_delete<WebCore::DisplaySleepDisabler> >=^{DisplaySleepDisabler}}}{RefPtr<WebCore::PlatformTextTrackMenuInterface>=^{PlatformTextTrackMenuInterface}}{unique_ptr<WebCore::HTMLMediaSession, std::__1::default_delete<WebCore::HTMLMediaSession> >={__compressed_pair<WebCore::HTMLMediaSession *, std::__1::default_delete<WebCore::HTMLMediaSession> >=^{HTMLMediaSession}}}{unique_ptr<WebCore::PageActivityAssertionToken, std::__1::default_delete<WebCore::PageActivityAssertionToken> >={__compressed_pair<WebCore::PageActivityAssertionToken *, std::__1::default_delete<WebCore::PageActivityAssertionToken> >=^{PageActivityAssertionToken}}}Q{RefPtr<WebCore::MediaControlsHost>=^{MediaControlsHost}}{RefPtr<WebCore::DOMWrapperWorld>=^{DOMWrapperWorld}}})a;
 - (void) enterFullscreen:(id)a;
 - (void) exitFullscreen;
 - (void) didSetupFullscreen;
 - (void) didEnterFullscreen;
 - (void) didExitFullscreen;
 - (void) didCleanupFullscreen;


@end