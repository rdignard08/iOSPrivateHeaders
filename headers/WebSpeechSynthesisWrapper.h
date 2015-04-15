
@protocol AVSpeechSynthesizerDelegate;
@interface WebSpeechSynthesisWrapper : NSObject <AVSpeechSynthesizerDelegate> {

    ^{PlatformSpeechSynthesizer=^^?{Vector<WTF::RefPtr<WebCore::PlatformSpeechSynthesisVoice>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::PlatformSpeechSynthesisVoice>}II}B^{PlatformSpeechSynthesizerClient}{RetainPtr<WebSpeechSynthesisWrapper>=^v}} m_synthesizerObject;
    m_ptr* m_utterance;
    m_ptr* m_synthesizer;
}

 - (void) pause;
 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) cancel;
 - (void) resume;
 - (float) mapSpeechRateToPlatformRate:(float)a ;
 - (void) speakUtterance:({PassRefPtr<WebCore::PlatformSpeechSynthesisUtterance>=^{PlatformSpeechSynthesisUtterance}})a ;
 - (void) speechSynthesizer:(id)a didStartSpeechUtterance:(id)b ;
 - (void) speechSynthesizer:(id)a didFinishSpeechUtterance:(id)b ;
 - (void) speechSynthesizer:(id)a didPauseSpeechUtterance:(id)b ;
 - (void) speechSynthesizer:(id)a didContinueSpeechUtterance:(id)b ;
 - (void) speechSynthesizer:(id)a didCancelSpeechUtterance:(id)b ;
 - (void) speechSynthesizer:(id)a willSpeakRangeOfSpeechString:({_NSRange=QQ})b utterance:(id)c ;
 - (id) initWithSpeechSynthesizer:(^{PlatformSpeechSynthesizer=^^?{Vector<WTF::RefPtr<WebCore::PlatformSpeechSynthesisVoice>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::PlatformSpeechSynthesisVoice>}II}B^{PlatformSpeechSynthesizerClient}{RetainPtr<WebSpeechSynthesisWrapper>=^v}})a ;


@end
