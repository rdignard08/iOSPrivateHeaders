
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
 - (float) mapSpeechRateToPlatformRate:(float)a;
 - (void) speakUtterance:({PassRefPtr<WebCore::PlatformSpeechSynthesisUtterance>=^{PlatformSpeechSynthesisUtterance}})a;
 - (void) speechSynthesizer:(id)adidStartSpeechUtterance:(id)b;
 - (void) speechSynthesizer:(id)adidFinishSpeechUtterance:(id)b;
 - (void) speechSynthesizer:(id)adidPauseSpeechUtterance:(id)b;
 - (void) speechSynthesizer:(id)adidContinueSpeechUtterance:(id)b;
 - (void) speechSynthesizer:(id)adidCancelSpeechUtterance:(id)b;
 - (void) speechSynthesizer:(id)awillSpeakRangeOfSpeechString:({_NSRange=QQ})butterance:(id)c;
 - (id) initWithSpeechSynthesizer:(^{PlatformSpeechSynthesizer=^^?{Vector<WTF::RefPtr<WebCore::PlatformSpeechSynthesisVoice>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::PlatformSpeechSynthesisVoice>}II}B^{PlatformSpeechSynthesizerClient}{RetainPtr<WebSpeechSynthesisWrapper>=^v}})a;


@end
