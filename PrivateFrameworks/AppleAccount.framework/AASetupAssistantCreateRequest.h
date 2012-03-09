/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class AASigningSession, NSDictionary;

@interface AASetupAssistantCreateRequest : AARequest  {
    NSDictionary *appleIDParameters;
    AASigningSession *signingSession;
}

+ (Class)responseClass;

- (void)dealloc;
- (id)bodyDictionary;
- (id)urlRequest;
- (id)initWithAppleIDParameters:(id)arg1 signingSession:(id)arg2;
- (id)urlString;

@end