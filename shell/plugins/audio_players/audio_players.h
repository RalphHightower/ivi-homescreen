/*
 * Copyright 2020 Toyota Connected North America
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <shell/platform/embedder/embedder.h>

namespace Plugins {

class AudioPlayers {
 public:
  AudioPlayers();
  ~AudioPlayers();

  static constexpr char kChannelName[] = "xyz.luan/audioplayers";

  /**
   * @brief Callback function for platform messages about isolate
   * @param[in] message Receive message
   * @param[in] userdata Pointer to User data
   * @return void
   * @relation
   * flutter
   */
  static void OnPlatformMessage(const FlutterPlatformMessage* message,
                                void* userdata);

  AudioPlayers(AudioPlayers& other) = delete;

  void operator=(const AudioPlayers&) = delete;

 private:
  static constexpr char kMethodCreate[] = "create";
  static constexpr char kMethodDispose[] = "dispose";
  static constexpr char kMethodSetAudioContext[] = "setAudioContext";
  static constexpr char kMethodSetReleaseMode[] = "setReleaseMode";
  static constexpr char kMethodGetCurrentPosition[] = "getCurrentPosition";
  static constexpr char kMethodGetDuration[] = "getDuration";
  static constexpr char kMethodPause[] = "pause";
  static constexpr char kMethodRelease[] = "release";
  static constexpr char kMethodSeek[] = "seek";
  static constexpr char kMethodResume[] = "resume";
  static constexpr char kMethodPosition[] = "position";
  static constexpr char kMethodSetBalance[] = "setBalance";
  static constexpr char kMethodSetPlayerMode[] = "setPlayerMode";
  static constexpr char kMethodSetPlaybackRate[] = "setPlaybackRate";
  static constexpr char kMethodSetSourceBytes[] = "setSourceBytes";
  static constexpr char kMethodSetSourceUrl[] = "setSourceUrl";
  static constexpr char kMethodSetVolume[] = "setVolume";
  static constexpr char kMethodSetContext[] = "setContext";
  static constexpr char kMethodStop[] = "stop";

  static constexpr char kKeyPlayerId[] = "playerId";
  static constexpr char kKeyReleaseMode[] = "releaseMode";
  static constexpr char kKeyPosition[] = "position";
  static constexpr char kKeyVolume[] = "volume";
  static constexpr char kKeyBalance[] = "balance";
  static constexpr char kKeyPlaybackRate[] = "playbackRate";
  static constexpr char kKeyPlayerMode[] = "playerMode";
  static constexpr char kKeyIsLocal[] = "isLocal";
  static constexpr char kKeyUrl[] = "url";
};

}  // namespace AudioPlayersPlugin