





<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">



  <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/frameworks-5b61aadc846f0818981ceec31b49c475fb084c163fdec5efbc2c21ef539092a9.css" integrity="sha256-W2Gq3IRvCBiYHO7DG0nEdfsITBY/3sXvvCwh71OQkqk=" media="all" rel="stylesheet" />
  <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/github-448c90f2e29bc363f13d0fb5cf7127f801ae7aa84a9b4f181cd43b943786ee6f.css" integrity="sha256-RIyQ8uKbw2PxPQ+1z3En+AGueqhKm08YHNQ7lDeG7m8=" media="all" rel="stylesheet" />
  
  
  
  

  <meta name="viewport" content="width=device-width">
  
  <title>gecko-dev/UIEvent.cpp at d61e0b9cedfc1b603afac8364c236da4d5eec145 · mozilla/gecko-dev</title>
  <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
  <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
  <meta property="fb:app_id" content="1401488693436528">

    
    <meta content="https://avatars2.githubusercontent.com/u/131524?v=3&amp;s=400" property="og:image" /><meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="mozilla/gecko-dev" property="og:title" /><meta content="https://github.com/mozilla/gecko-dev" property="og:url" /><meta content="gecko-dev - Read-only Git mirror of the Mercurial gecko repositories at https://hg.mozilla.org. Please don&amp;#39;t submit PRs, see: https://developer.mozilla.org/en-US/docs/Mercurial_FAQ#I%27m_all_us..." property="og:description" />

  <link rel="assets" href="https://assets-cdn.github.com/">
  <link rel="web-socket" href="wss://live.github.com/_sockets/VjI6MTYxODQ3NzI3Ojk1M2QwYjg4YjVjNTFiMzAyNGEwYzdiNWEzNTY3ODBmMGJlYjJjYWVmN2E3ZTY1ZWEzNGU5M2ViYjI0YzZhMWI=--6a835fa4469835310659c4c6f8850bc618f32039">
  <meta name="pjax-timeout" content="1000">
  <link rel="sudo-modal" href="/sessions/sudo_modal">
  <meta name="request-id" content="CEB8:1D05:223076:354B45:58D2989E" data-pjax-transient>
  

  <meta name="selected-link" value="repo_source" data-pjax-transient>

  <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
<meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
    <meta name="google-analytics" content="UA-3769691-2">

<meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" /><meta content="https://collector.githubapp.com/github-external/browser_event" name="octolytics-event-url" /><meta content="CEB8:1D05:223076:354B45:58D2989E" name="octolytics-dimension-request_id" /><meta content="25336724" name="octolytics-actor-id" /><meta content="omarnemer" name="octolytics-actor-login" /><meta content="8cc0d6668b437294109d6893d13529df08a5d0bfddd8c10157b4d53230ff34f9" name="octolytics-actor-hash" />
<meta content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/show" data-pjax-transient="true" name="analytics-location" />




  <meta class="js-ga-set" name="dimension1" content="Logged In">


  

      <meta name="hostname" content="github.com">
  <meta name="user-login" content="omarnemer">

      <meta name="expected-hostname" content="github.com">
    <meta name="js-proxy-site-detection-payload" content="Yjg5NmQxMjAwZjE2ODEzNDY4Yzg5MjdhZjE1ZjA0OGFjMTc2ODdkNDUyMTQxMjUyNGY1Mjc1NDA1NzdjOGIxMHx7InJlbW90ZV9hZGRyZXNzIjoiNzQuMTQuMjE4LjQ4IiwicmVxdWVzdF9pZCI6IkNFQjg6MUQwNToyMjMwNzY6MzU0QjQ1OjU4RDI5ODlFIiwidGltZXN0YW1wIjoxNDkwMTk2NjM4LCJob3N0IjoiZ2l0aHViLmNvbSJ9">


  <meta name="html-safe-nonce" content="1b01a4ac6abffea6d1d1b98429d650b883803e37">

  <meta http-equiv="x-pjax-version" content="c47fc29ae241bb4894f4a67e34f0e2d2">
  

    
  <meta name="description" content="gecko-dev - Read-only Git mirror of the Mercurial gecko repositories at https://hg.mozilla.org. Please don&#39;t submit PRs, see: https://developer.mozilla.org/en-US/docs/Mercurial_FAQ#I%27m_all_used_to_git.2C_but_how_can_I_provide_Mercurial-ready_patches_.3F">
  <meta name="go-import" content="github.com/mozilla/gecko-dev git https://github.com/mozilla/gecko-dev.git">

  <meta content="131524" name="octolytics-dimension-user_id" /><meta content="mozilla" name="octolytics-dimension-user_login" /><meta content="13509108" name="octolytics-dimension-repository_id" /><meta content="mozilla/gecko-dev" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="13509108" name="octolytics-dimension-repository_network_root_id" /><meta content="mozilla/gecko-dev" name="octolytics-dimension-repository_network_root_nwo" />
        <link href="https://github.com/mozilla/gecko-dev/commits/d61e0b9cedfc1b603afac8364c236da4d5eec145.atom" rel="alternate" title="Recent Commits to gecko-dev:d61e0b9cedfc1b603afac8364c236da4d5eec145" type="application/atom+xml">


    <link rel="canonical" href="https://github.com/mozilla/gecko-dev/blob/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp" data-pjax-transient>


  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <link rel="mask-icon" href="https://assets-cdn.github.com/pinned-octocat.svg" color="#000000">
  <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">

<meta name="theme-color" content="#1e2327">


  <meta name="u2f-support" content="true">

  </head>

  <body class="logged-in env-production page-blob">
    

  <div class="position-relative js-header-wrapper ">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>
    <div id="js-pjax-loader-bar" class="pjax-loader-bar"><div class="progress"></div></div>

    
    
    



        
<div class="header" role="banner">
  <div class="container clearfix">
    <a class="header-logo-invertocat" href="https://github.com/" data-hotkey="g d" aria-label="Homepage" data-ga-click="Header, go to dashboard, icon:logo">
  <svg aria-hidden="true" class="octicon octicon-mark-github" height="32" version="1.1" viewBox="0 0 16 16" width="32"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
</a>


        <div class="header-search scoped-search site-scoped-search js-site-search" role="search">
  <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/mozilla/gecko-dev/search" class="js-site-search-form" data-scoped-search-url="/mozilla/gecko-dev/search" data-unscoped-search-url="/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <label class="form-control header-search-wrapper js-chromeless-input-container">
        <a href="/mozilla/gecko-dev/blob/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp" class="header-search-scope no-underline">This repository</a>
      <input type="text"
        class="form-control header-search-input js-site-search-focus js-site-search-field is-clearable"
        data-hotkey="s"
        name="q"
        value=""
        placeholder="Search"
        aria-label="Search this repository"
        data-unscoped-placeholder="Search GitHub"
        data-scoped-placeholder="Search"
        autocapitalize="off">
        <input type="hidden" class="js-site-search-type-field" name="type" >
    </label>
</form></div>


      <ul class="header-nav float-left" role="navigation">
        <li class="header-nav-item">
          <a href="/pulls" aria-label="Pull requests you created" class="js-selected-navigation-item header-nav-link" data-ga-click="Header, click, Nav menu - item:pulls context:user" data-hotkey="g p" data-selected-links="/pulls /pulls/assigned /pulls/mentioned /pulls">
            Pull requests
</a>        </li>
        <li class="header-nav-item">
          <a href="/issues" aria-label="Issues you created" class="js-selected-navigation-item header-nav-link" data-ga-click="Header, click, Nav menu - item:issues context:user" data-hotkey="g i" data-selected-links="/issues /issues/assigned /issues/mentioned /issues">
            Issues
</a>        </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="https://gist.github.com/" data-ga-click="Header, go to gist, text:gist">Gist</a>
          </li>
      </ul>

    
<ul class="header-nav user-nav float-right" id="user-links">
  <li class="header-nav-item">
    

  </li>

  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link tooltipped tooltipped-s js-menu-target" href="/new"
       aria-label="Create new…"
       data-ga-click="Header, create new, icon:add">
      <svg aria-hidden="true" class="octicon octicon-plus float-left" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 9H7v5H5V9H0V7h5V2h2v5h5z"/></svg>
      <span class="dropdown-caret"></span>
    </a>

    <div class="dropdown-menu-content js-menu-content">
      <ul class="dropdown-menu dropdown-menu-sw">
        
<a class="dropdown-item" href="/new" data-ga-click="Header, create new repository">
  New repository
</a>

  <a class="dropdown-item" href="/new/import" data-ga-click="Header, import a repository">
    Import repository
  </a>

<a class="dropdown-item" href="https://gist.github.com/" data-ga-click="Header, create new gist">
  New gist
</a>

  <a class="dropdown-item" href="/organizations/new" data-ga-click="Header, create new organization">
    New organization
  </a>




      </ul>
    </div>
  </li>

  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link name tooltipped tooltipped-sw js-menu-target" href="/omarnemer"
       aria-label="View profile and more"
       data-ga-click="Header, show menu, icon:avatar">
      <img alt="@omarnemer" class="avatar" src="https://avatars0.githubusercontent.com/u/25336724?v=3&amp;s=40" height="20" width="20">
      <span class="dropdown-caret"></span>
    </a>

    <div class="dropdown-menu-content js-menu-content">
      <div class="dropdown-menu dropdown-menu-sw">
        <div class="dropdown-header header-nav-current-user css-truncate">
          Signed in as <strong class="css-truncate-target">omarnemer</strong>
        </div>

        <div class="dropdown-divider"></div>

        <a class="dropdown-item" href="/omarnemer" data-ga-click="Header, go to profile, text:your profile">
          Your profile
        </a>
        <a class="dropdown-item" href="/omarnemer?tab=stars" data-ga-click="Header, go to starred repos, text:your stars">
          Your stars
        </a>
        <a class="dropdown-item" href="/explore" data-ga-click="Header, go to explore, text:explore">
          Explore
        </a>
          <a class="dropdown-item" href="/integrations" data-ga-click="Header, go to integrations, text:integrations">
            Integrations
          </a>
        <a class="dropdown-item" href="https://help.github.com" data-ga-click="Header, go to help, text:help">
          Help
        </a>

        <div class="dropdown-divider"></div>

        <a class="dropdown-item" href="/settings/profile" data-ga-click="Header, go to settings, icon:settings">
          Settings
        </a>

        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/logout" class="logout-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="PaMWtrPteAr14pE4qCUsozRLf8p1KgC8lfNEkABPnNuNf0D7ITFOINSc1kaOf6NVVFJWWdal9rt/GgJRUUxtFQ==" /></div>
          <button type="submit" class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout">
            Sign out
          </button>
</form>      </div>
    </div>
  </li>
</ul>


    <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/logout" class="sr-only right-0" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="IrYzmeG0f2JqoLLEITmXgMErA1l7OKBEt/JgKOR3xAWSamXUc2hJSEve9boHYxh2oTIqyti3VkNdGybptXQ1yw==" /></div>
      <button type="submit" class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout">
        Sign out
      </button>
</form>  </div>
</div>


      

  </div>

  <div id="start-of-content" class="accessibility-aid"></div>

    <div id="js-flash-container">
</div>



  <div role="main">
      <div itemscope itemtype="http://schema.org/SoftwareSourceCode">
    <div id="js-repo-pjax-container" data-pjax-container>
        



  <div class="pagehead repohead instapaper_ignore readability-menu experiment-repo-nav">
    <div class="container repohead-details-container">


      <ul class="pagehead-actions">
  <li>
        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="MOkYXYLLc/OkpV3qM42UaTtlGuo8tw4DojoPZjgL1HjvazjsXuPxPr/o+VxUSLofm6MIIeLu5chN/S7gGRvK+A==" /></div>      <input class="form-control" id="repository_id" name="repository_id" type="hidden" value="13509108" />

        <div class="select-menu js-menu-container js-select-menu">
          <a href="/mozilla/gecko-dev/subscription"
            class="btn btn-sm btn-with-count select-menu-button js-menu-target" role="button" tabindex="0" aria-haspopup="true"
            data-ga-click="Repository, click Watch settings, action:blob#show">
            <span class="js-select-button">
              <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
              Watch
            </span>
          </a>
          <a class="social-count js-social-count"
            href="/mozilla/gecko-dev/watchers"
            aria-label="101 users are watching this repository">
            101
          </a>

        <div class="select-menu-modal-holder">
          <div class="select-menu-modal subscription-menu-modal js-menu-content" aria-hidden="true">
            <div class="select-menu-header js-navigation-enable" tabindex="-1">
              <svg aria-label="Close" class="octicon octicon-x js-menu-close" height="16" role="img" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
              <span class="select-menu-title">Notifications</span>
            </div>

              <div class="select-menu-list js-navigation-container" role="menu">

                <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input checked="checked" id="do_included" name="do" type="radio" value="included" />
                    <span class="select-menu-item-heading">Not watching</span>
                    <span class="description">Be notified when participating or @mentioned.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                      Watch
                    </span>
                  </div>
                </div>

                <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input id="do_subscribed" name="do" type="radio" value="subscribed" />
                    <span class="select-menu-item-heading">Watching</span>
                    <span class="description">Be notified of all conversations.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                      Unwatch
                    </span>
                  </div>
                </div>

                <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input id="do_ignore" name="do" type="radio" value="ignore" />
                    <span class="select-menu-item-heading">Ignoring</span>
                    <span class="description">Never be notified.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-mute" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8 2.81v10.38c0 .67-.81 1-1.28.53L3 10H1c-.55 0-1-.45-1-1V7c0-.55.45-1 1-1h2l3.72-3.72C7.19 1.81 8 2.14 8 2.81zm7.53 3.22l-1.06-1.06-1.97 1.97-1.97-1.97-1.06 1.06L11.44 8 9.47 9.97l1.06 1.06 1.97-1.97 1.97 1.97 1.06-1.06L13.56 8l1.97-1.97z"/></svg>
                      Stop ignoring
                    </span>
                  </div>
                </div>

              </div>

            </div>
          </div>
        </div>
</form>
  </li>

  <li>
      <div class="js-toggler-container js-social-container starring-container ">
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/mozilla/gecko-dev/unstar" class="starred" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="jAla2u1TgdLSzDu8v46gfh1gsYf6fkBnfc4MoLEutuLkFq8boy+zwy7XY9vMCKS+UqOc07nnwVGPxjQ2oAD/zg==" /></div>
      <button
        type="submit"
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Unstar this repository" title="Unstar mozilla/gecko-dev"
        data-ga-click="Repository, click unstar button, action:blob#show; text:Unstar">
        <svg aria-hidden="true" class="octicon octicon-star" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74z"/></svg>
        Unstar
      </button>
        <a class="social-count js-social-count" href="/mozilla/gecko-dev/stargazers"
           aria-label="851 users starred this repository">
          851
        </a>
</form>
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/mozilla/gecko-dev/star" class="unstarred" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="/7mN7Ym3IcIju1ouB97PJp2uiQND+bdeZfhOSiBpAIo9MqSJS2Vyx2pjsTUR0gxLvhlDaF7u94IbtobiiurV0g==" /></div>
      <button
        type="submit"
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Star this repository" title="Star mozilla/gecko-dev"
        data-ga-click="Repository, click star button, action:blob#show; text:Star">
        <svg aria-hidden="true" class="octicon octicon-star" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74z"/></svg>
        Star
      </button>
        <a class="social-count js-social-count" href="/mozilla/gecko-dev/stargazers"
           aria-label="851 users starred this repository">
          851
        </a>
</form>  </div>

  </li>

  <li>
          <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/mozilla/gecko-dev/fork" class="btn-with-count" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="HWaqvrc7aM0uTUF9ktFLmoM4jTpigcMGJz6rAV8JACK/zfnO4JZmWuoHFR+6eHK/iAfbjhNshqhYritCs09paw==" /></div>
            <button
                type="submit"
                class="btn btn-sm btn-with-count"
                data-ga-click="Repository, show fork modal, action:blob#show; text:Fork"
                title="Fork your own copy of mozilla/gecko-dev to your account"
                aria-label="Fork your own copy of mozilla/gecko-dev to your account">
              <svg aria-hidden="true" class="octicon octicon-repo-forked" height="16" version="1.1" viewBox="0 0 10 16" width="10"><path fill-rule="evenodd" d="M8 1a1.993 1.993 0 0 0-1 3.72V6L5 8 3 6V4.72A1.993 1.993 0 0 0 2 1a1.993 1.993 0 0 0-1 3.72V6.5l3 3v1.78A1.993 1.993 0 0 0 5 15a1.993 1.993 0 0 0 1-3.72V9.5l3-3V4.72A1.993 1.993 0 0 0 8 1zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3 10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3-10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
              Fork
            </button>
</form>
    <a href="/mozilla/gecko-dev/network" class="social-count"
       aria-label="961 users forked this repository">
      961
    </a>
  </li>
</ul>

      <h1 class="public ">
  <svg aria-hidden="true" class="octicon octicon-repo" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z"/></svg>
  <span class="author" itemprop="author"><a href="/mozilla" class="url fn" rel="author">mozilla</a></span><!--
--><span class="path-divider">/</span><!--
--><strong itemprop="name"><a href="/mozilla/gecko-dev" data-pjax="#js-repo-pjax-container">gecko-dev</a></strong>

</h1>

    </div>
    <div class="container">
      
<nav class="reponav js-repo-nav js-sidenav-container-pjax"
     itemscope
     itemtype="http://schema.org/BreadcrumbList"
     role="navigation"
     data-pjax="#js-repo-pjax-container">

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/mozilla/gecko-dev" class="js-selected-navigation-item selected reponav-item" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /mozilla/gecko-dev" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-code" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M9.5 3L8 4.5 11.5 8 8 11.5 9.5 13 14 8 9.5 3zm-5 0L0 8l4.5 5L6 11.5 2.5 8 6 4.5 4.5 3z"/></svg>
      <span itemprop="name">Code</span>
      <meta itemprop="position" content="1">
</a>  </span>


  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/mozilla/gecko-dev/pulls" class="js-selected-navigation-item reponav-item" data-hotkey="g p" data-selected-links="repo_pulls /mozilla/gecko-dev/pulls" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-git-pull-request" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M11 11.28V5c-.03-.78-.34-1.47-.94-2.06C9.46 2.35 8.78 2.03 8 2H7V0L4 3l3 3V4h1c.27.02.48.11.69.31.21.2.3.42.31.69v6.28A1.993 1.993 0 0 0 10 15a1.993 1.993 0 0 0 1-3.72zm-1 2.92c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zM4 3c0-1.11-.89-2-2-2a1.993 1.993 0 0 0-1 3.72v6.56A1.993 1.993 0 0 0 2 15a1.993 1.993 0 0 0 1-3.72V4.72c.59-.34 1-.98 1-1.72zm-.8 10c0 .66-.55 1.2-1.2 1.2-.65 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
      <span itemprop="name">Pull requests</span>
      <span class="counter">3</span>
      <meta itemprop="position" content="3">
</a>  </span>

  <a href="/mozilla/gecko-dev/projects" class="js-selected-navigation-item reponav-item" data-selected-links="repo_projects new_repo_project repo_project /mozilla/gecko-dev/projects">
    <svg aria-hidden="true" class="octicon octicon-project" height="16" version="1.1" viewBox="0 0 15 16" width="15"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 0 0-1 1v14a1 1 0 0 0 1 1h13a1 1 0 0 0 1-1V1a1 1 0 0 0-1-1z"/></svg>
    Projects
    <span class="counter">0</span>
</a>


  <a href="/mozilla/gecko-dev/pulse" class="js-selected-navigation-item reponav-item" data-selected-links="pulse /mozilla/gecko-dev/pulse">
    <svg aria-hidden="true" class="octicon octicon-pulse" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M11.5 8L8.8 5.4 6.6 8.5 5.5 1.6 2.38 8H0v2h3.6l.9-1.8.9 5.4L9 8.5l1.6 1.5H14V8z"/></svg>
    Pulse
</a>
  <a href="/mozilla/gecko-dev/graphs" class="js-selected-navigation-item reponav-item" data-selected-links="repo_graphs repo_contributors /mozilla/gecko-dev/graphs">
    <svg aria-hidden="true" class="octicon octicon-graph" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M16 14v1H0V0h1v14h15zM5 13H3V8h2v5zm4 0H7V3h2v10zm4 0h-2V6h2v7z"/></svg>
    Graphs
</a>

</nav>

    </div>
  </div>

<div class="container new-discussion-timeline experiment-repo-nav">
  <div class="repository-content">

    

<a href="/mozilla/gecko-dev/blob/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp" class="d-none js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:3a1aad2087e5a9ed501b78c39ce546fa -->

<div class="file-navigation js-zeroclipboard-container">
  
<div class="select-menu branch-select-menu js-menu-container js-select-menu float-left">
  <button class=" btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w"
    
    type="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
      <i>Tree:</i>
      <span class="js-select-button css-truncate-target">d61e0b9ced</span>
  </button>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <svg aria-label="Close" class="octicon octicon-x js-menu-close" height="16" role="img" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
        <span class="select-menu-title">Switch branches/tags</span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="form-control js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" data-filter-placeholder="Filter branches/tags" class="js-select-menu-tab" role="tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab" role="tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches" role="menu">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO50_2011051718_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO50_2011051718_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO50_2011051718_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO50_2011052708_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO50_2011052708_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO50_2011052708_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO50_2011060309_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO50_2011060309_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO50_2011060309_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO50_2011060814_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO50_2011060814_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO50_2011060814_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO50_2011061316_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO50_2011061316_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO50_2011061316_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO50_2011061416_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO50_2011061416_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO50_2011061416_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO50_2011061514_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO50_2011061514_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO50_2011061514_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO60_2011070520_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO60_2011070520_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO60_2011070520_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO60_2011071316_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO60_2011071316_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO60_2011071316_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO60_2011072110_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO60_2011072110_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO60_2011072110_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO60_2011072114_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO60_2011072114_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO60_2011072114_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO60_2011072907_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO60_2011072907_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO60_2011072907_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO60_2011080402_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO60_2011080402_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO60_2011080402_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO60_2011081114_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO60_2011081114_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO60_2011081114_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO70_2011081615_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO70_2011081615_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO70_2011081615_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO70_2011082416_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO70_2011082416_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO70_2011082416_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO70_2011083009_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO70_2011083009_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO70_2011083009_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO70_2011083111_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO70_2011083111_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO70_2011083111_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO70_2011090812_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO70_2011090812_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO70_2011090812_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO70_2011091608_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO70_2011091608_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO70_2011091608_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO70_2011092208_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO70_2011092208_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO70_2011092208_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO80_2011092805_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO80_2011092805_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO80_2011092805_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO80_2011100518_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO80_2011100518_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO80_2011100518_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO80_2011101118_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO80_2011101118_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO80_2011101118_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO80_2011101907_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO80_2011101907_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO80_2011101907_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO80_2011102619_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO80_2011102619_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO80_2011102619_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO80_2011103118_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO80_2011103118_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO80_2011103118_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO80_2011110416_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO80_2011110416_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO80_2011110416_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO90_2011110909_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO90_2011110909_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO90_2011110909_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO90_2011110911_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO90_2011110911_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO90_2011110911_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO90_2011111609_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO90_2011111609_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO90_2011111609_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO90_2011112217_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO90_2011112217_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO90_2011112217_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO90_2011113005_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO90_2011113005_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO90_2011113005_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO90_2011120622_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO90_2011120622_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO90_2011120622_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO90_2011121217_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO90_2011121217_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO90_2011121217_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO90_2011121613_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO90_2011121613_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO90_2011121613_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO100_2011122113_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO100_2011122113_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO100_2011122113_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO100_2011122805_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO100_2011122805_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO100_2011122805_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO100_2012010318_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO100_2012010318_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO100_2012010318_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO100_2012010410_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO100_2012010410_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO100_2012010410_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO100_2012011108_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO100_2012011108_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO100_2012011108_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO100_2012011807_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO100_2012011807_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO100_2012011807_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO100_2012012323_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO100_2012012323_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO100_2012012323_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO100_2012012901_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO100_2012012901_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO100_2012012901_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO110_2012020115_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO110_2012020115_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO110_2012020115_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO110_2012020801_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO110_2012020801_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO110_2012020801_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO110_2012021420_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO110_2012021420_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO110_2012021420_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO110_2012021522_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO110_2012021522_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO110_2012021522_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO110_2012022207_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO110_2012022207_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO110_2012022207_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO110_2012022820_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO110_2012022820_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO110_2012022820_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO110_2012030517_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO110_2012030517_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO110_2012030517_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO110_2012030815_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO110_2012030815_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO110_2012030815_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO110_2012030912_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO110_2012030912_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO110_2012030912_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO110_2012031017_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO110_2012031017_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO110_2012031017_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO110_2012031218_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO110_2012031218_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO110_2012031218_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO120_2012031407_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO120_2012031407_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO120_2012031407_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO120_2012031419_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO120_2012031419_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO120_2012031419_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO120_2012032021_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO120_2012032021_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO120_2012032021_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO120_2012032804_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO120_2012032804_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO120_2012032804_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO120_2012040320_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO120_2012040320_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO120_2012040320_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO120_2012041106_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO120_2012041106_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO120_2012041106_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO120_2012041716_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO120_2012041716_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO120_2012041716_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO120_2012042014_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO120_2012042014_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO120_2012042014_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO130_2012042512_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO130_2012042512_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO130_2012042512_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO130_2012050119_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO130_2012050119_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO130_2012050119_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO130_2012050817_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO130_2012050817_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO130_2012050817_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO130_2012051611_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO130_2012051611_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO130_2012051611_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO130_2012052216_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO130_2012052216_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO130_2012052216_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO130_2012052311_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO130_2012052311_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO130_2012052311_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO130_2012052815_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO130_2012052815_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO130_2012052815_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO130_2012053115_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO130_2012053115_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO130_2012053115_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO130_2012060104_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO130_2012060104_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO130_2012060104_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO140_2012060421_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO140_2012060421_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO140_2012060421_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO140_2012060511_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO140_2012060511_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO140_2012060511_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO140_2012061213_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO140_2012061213_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO140_2012061213_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO140_2012061216_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO140_2012061216_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO140_2012061216_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO140_2012061918_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO140_2012061918_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO140_2012061918_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO140_2012061920_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO140_2012061920_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO140_2012061920_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO140_2012062401_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO140_2012062401_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO140_2012062401_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO140_2012062805_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO140_2012062805_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO140_2012062805_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO140_2012070408_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO140_2012070408_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO140_2012070408_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO140_2012070409_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO140_2012070409_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO140_2012070409_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO140_2012071012_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO140_2012071012_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO140_2012071012_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO140_2012071119_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO140_2012071119_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO140_2012071119_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO140_2012071314_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO140_2012071314_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO140_2012071314_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO150_2012071710_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO150_2012071710_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO150_2012071710_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO150_2012071711_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO150_2012071711_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO150_2012071711_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO150_2012072419_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO150_2012072419_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO150_2012072419_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO150_2012073114_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO150_2012073114_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO150_2012073114_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO150_2012073115_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO150_2012073115_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO150_2012073115_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO150_2012080812_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO150_2012080812_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO150_2012080812_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO150_2012080818_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO150_2012080818_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO150_2012080818_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO150_2012081422_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO150_2012081422_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO150_2012081422_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO150_2012081508_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO150_2012081508_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO150_2012081508_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO150_2012082116_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO150_2012082116_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO150_2012082116_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO150_2012082118_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO150_2012082118_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO150_2012082118_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO150_2012082415_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO150_2012082415_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO150_2012082415_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO150_2012082417_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO150_2012082417_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO150_2012082417_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO160_2012082808_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO160_2012082808_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO160_2012082808_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO160_2012082817_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO160_2012082817_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO160_2012082817_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO160_2012090412_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO160_2012090412_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO160_2012090412_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO160_2012090515_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO160_2012090515_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO160_2012090515_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO160_2012091123_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO160_2012091123_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO160_2012091123_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO160_2012091906_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO160_2012091906_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO160_2012091906_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO160_2012092515_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO160_2012092515_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO160_2012092515_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO160_2012092520_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO160_2012092520_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO160_2012092520_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO160_2012100207_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO160_2012100207_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO160_2012100207_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO160_2012100209_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO160_2012100209_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO160_2012100209_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO160_2012100513_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO160_2012100513_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO160_2012100513_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO160_2012100515_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO160_2012100515_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO160_2012100515_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO170_2012100914_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO170_2012100914_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO170_2012100914_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO170_2012101014_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO170_2012101014_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO170_2012101014_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO170_2012101016_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO170_2012101016_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO170_2012101016_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO170_2012101707_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO170_2012101707_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO170_2012101707_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO170_2012102312_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO170_2012102312_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO170_2012102312_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO170_2012103012_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO170_2012103012_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO170_2012103012_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO170_2012103106_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO170_2012103106_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO170_2012103106_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO170_2012110619_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO170_2012110619_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO170_2012110619_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO170_2012111306_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO170_2012111306_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO170_2012111306_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO170_2012111612_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO170_2012111612_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO170_2012111612_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO170_2012111918_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO170_2012111918_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO170_2012111918_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO180_2012112110_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO180_2012112110_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO180_2012112110_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO180_2012112808_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO180_2012112808_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO180_2012112808_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO180_2012112816_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO180_2012112816_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO180_2012112816_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO180_2012120508_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO180_2012120508_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO180_2012120508_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO180_2012121210_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO180_2012121210_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO180_2012121210_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO180_2012121910_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO180_2012121910_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO180_2012121910_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO180_2012122710_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO180_2012122710_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO180_2012122710_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO180_2012123109_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO180_2012123109_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO180_2012123109_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO180_2013010417_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO180_2013010417_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO180_2013010417_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO190_2013010812_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO190_2013010812_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO190_2013010812_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO190_2013010816_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO190_2013010816_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO190_2013010816_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO190_2013010913_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO190_2013010913_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO190_2013010913_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO190_2013011610_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO190_2013011610_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO190_2013011610_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO190_2013011709_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO190_2013011709_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO190_2013011709_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO190_2013012311_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO190_2013012311_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO190_2013012311_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO190_2013013010_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO190_2013013010_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO190_2013013010_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO190_2013020611_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO190_2013020611_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO190_2013020611_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO190_2013021211_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO190_2013021211_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO190_2013021211_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO190_2013021515_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO190_2013021515_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO190_2013021515_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO200_2013022008_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO200_2013022008_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO200_2013022008_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO200_2013022013_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO200_2013022013_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO200_2013022013_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO200_2013032617_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO200_2013032617_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO200_2013032617_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO201_2011041321_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO201_2011041321_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO201_2011041321_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO210_2013050704_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO210_2013050704_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO210_2013050704_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO210_2013051114_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO210_2013051114_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO210_2013051114_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO210_2013051217_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO210_2013051217_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO210_2013051217_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO220_2013061806_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO220_2013061806_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO220_2013061806_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO220_2013061915_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO220_2013061915_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO220_2013061915_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO230_2013073013_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO230_2013073013_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO230_2013073013_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO230_2013080122_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO230_2013080122_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO230_2013080122_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO240esr_2013091022_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO240esr_2013091022_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO240esr_2013091022_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO240_2013091018_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO240_2013091018_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO240_2013091018_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO250_2013102121_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO250_2013102121_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO250_2013102121_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO250_2013102300_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO250_2013102300_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO250_2013102300_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO250_2013102517_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO250_2013102517_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO250_2013102517_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO260_2013120223_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO260_2013120223_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO260_2013120223_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO260_2013120510_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO260_2013120510_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO260_2013120510_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO270_2014012722_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO270_2014012722_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO270_2014012722_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO280_2014031020_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO280_2014031020_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO280_2014031020_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO280_2014031500_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO280_2014031500_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO280_2014031500_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO290_2014042200_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO290_2014042200_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO290_2014042200_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO300_2014060316_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO300_2014060316_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO300_2014060316_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO300_2014060520_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO300_2014060520_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO300_2014060520_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO310esr_2014071418_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO310esr_2014071418_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO310esr_2014071418_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO310esr_2014071715_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO310esr_2014071715_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO310esr_2014071715_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO310_2014071417_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO310_2014071417_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO310_2014071417_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO310_2014071621_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO310_2014071621_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO310_2014071621_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO320_2014082522_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO320_2014082522_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO320_2014082522_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO330_2014100710_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO330_2014100710_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO330_2014100710_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO330_2014101104_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO330_2014101104_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO330_2014101104_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO331_2014102917_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO331_2014102917_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO331_2014102917_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO331_2014103013_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO331_2014103013_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO331_2014103013_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO331_2014110614_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO331_2014110614_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO331_2014110614_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO340_2014112423_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO340_2014112423_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO340_2014112423_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO340_2014112520_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO340_2014112520_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO340_2014112520_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO340_2014112606_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO340_2014112606_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO340_2014112606_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO350_2015010523_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO350_2015010523_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO350_2015010523_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO350_2015010702_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO350_2015010702_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO350_2015010702_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO350_2015010823_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO350_2015010823_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO350_2015010823_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO360_2015021920_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO360_2015021920_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO360_2015021920_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO360_2015022302_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO360_2015022302_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO360_2015022302_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO370_2015032422_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO370_2015032422_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO370_2015032422_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO370_2015032621_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO370_2015032621_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO370_2015032621_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO380esr_2015050513_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO380esr_2015050513_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO380esr_2015050513_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO380_2015050317_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO380_2015050317_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO380_2015050317_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO380_2015050320_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO380_2015050320_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO380_2015050320_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO390_2015062220_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO390_2015062220_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO390_2015062220_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO390_2015062418_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO390_2015062418_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO390_2015062418_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO390_2015062614_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO390_2015062614_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO390_2015062614_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO390_2015063018_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO390_2015063018_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO390_2015063018_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO400_2015080313_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO400_2015080313_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO400_2015080313_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO400_2015080415_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO400_2015080415_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO400_2015080415_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO400_2015080613_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO400_2015080613_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO400_2015080613_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO400_2015080618_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO400_2015080618_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO400_2015080618_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO400_2015080711_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO400_2015080711_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO400_2015080711_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO410_2015091421_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO410_2015091421_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO410_2015091421_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO410_2015091623_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO410_2015091623_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO410_2015091623_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO410_2015091718_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO410_2015091718_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO410_2015091718_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO420_2015102619_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO420_2015102619_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO420_2015102619_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO420_2015102918_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO420_2015102918_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO420_2015102918_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO430_2015120812_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO430_2015120812_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO430_2015120812_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO440_2016011817_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO440_2016011817_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO440_2016011817_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO440_2016012018_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO440_2016012018_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO440_2016012018_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO440_2016012318_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO440_2016012318_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO440_2016012318_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO450esr_2016030316_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO450esr_2016030316_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO450esr_2016030316_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO450esr_2016030414_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO450esr_2016030414_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO450esr_2016030414_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO450_2016030103_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO450_2016030103_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO450_2016030103_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO450_2016030316_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO450_2016030316_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO450_2016030316_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO501_2011070717_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO501_2011070717_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO501_2011070717_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO601_2011083006_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO601_2011083006_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO601_2011083006_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO602_2011083109_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO602_2011083109_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO602_2011083109_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO701_2011092812_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO701_2011092812_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO701_2011092812_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO901_2011122016_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO901_2011122016_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO901_2011122016_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO1001_2012020805_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO1001_2012020805_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO1001_2012020805_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO1002_2012021522_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO1002_2012021522_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO1002_2012021522_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO1301_2012061411_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO1301_2012061411_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO1301_2012061411_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO1302_2012062310_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO1302_2012062310_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO1302_2012062310_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO1401_2012071313_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO1401_2012071313_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO1401_2012071313_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO1601_2012101014_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO1601_2012101014_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO1601_2012101014_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO1602_2012102407_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO1602_2012102407_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO1602_2012102407_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO1701_2013010313_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO1701_2013010313_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO1701_2013010313_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO1801_2013011610_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO1801_2013011610_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO1801_2013011610_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO1802_2013020109_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO1802_2013020109_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO1802_2013020109_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO1901_2013022619_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO1901_2013022619_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO1901_2013022619_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO1902_2013030705_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO1902_2013030705_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO1902_2013030705_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2001_2013040922_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2001_2013040922_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2001_2013040922_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2301_2013081409_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2301_2013081409_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2301_2013081409_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2301_2013081518_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2301_2013081518_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2301_2013081518_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2411esr_2013111803_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2411esr_2013111803_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2411esr_2013111803_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2420esr_2013120417_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2420esr_2013120417_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2420esr_2013120417_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2420esr_2013120520_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2420esr_2013120520_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2420esr_2013120520_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2430esr_2014012816_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2430esr_2014012816_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2430esr_2014012816_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2430esr_2014013111_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2430esr_2014013111_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2430esr_2014013111_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2440esr_2014031511_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2440esr_2014031511_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2440esr_2014031511_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2450esr_2014042118_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2450esr_2014042118_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2450esr_2014042118_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2460esr_2014060313_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2460esr_2014060313_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2460esr_2014060313_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2460esr_2014060920_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2460esr_2014060920_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2460esr_2014060920_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2470esr_2014071418_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2470esr_2014071418_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2470esr_2014071418_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2480esr_2014082508_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2480esr_2014082508_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2480esr_2014082508_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2481esr_2014092322_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2481esr_2014092322_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2481esr_2014092322_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2501_2013111218_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2501_2013111218_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2501_2013111218_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2701_2014021215_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2701_2014021215_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2701_2014021215_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2901_2014050600_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2901_2014050600_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2901_2014050600_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO2901_2014050617_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO2901_2014050617_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO2901_2014050617_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3110esr_2014082508_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3110esr_2014082508_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3110esr_2014082508_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3111esr_2014092321_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3111esr_2014092321_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3111esr_2014092321_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3120esr_2014100702_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3120esr_2014100702_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3120esr_2014100702_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3120esr_2014101105_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3120esr_2014101105_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3120esr_2014101105_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3120esr_2014101110_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3120esr_2014101110_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3120esr_2014101110_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3121esr_2014110314_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3121esr_2014110314_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3121esr_2014110314_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3130esr_2014112501_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3130esr_2014112501_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3130esr_2014112501_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3130esr_2014112505_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3130esr_2014112505_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3130esr_2014112505_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3140esr_2015010523_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3140esr_2015010523_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3140esr_2015010523_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3150esr_2015021614_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3150esr_2015021614_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3150esr_2015021614_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3150esr_2015021713_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3150esr_2015021713_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3150esr_2015021713_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3160esr_2015032414_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3160esr_2015032414_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3160esr_2015032414_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3160esr_2015032523_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3160esr_2015032523_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3160esr_2015032523_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3170esr_2015050415_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3170esr_2015050415_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3170esr_2015050415_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3170esr_2015050422_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3170esr_2015050422_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3170esr_2015050422_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3180esr_2015062417_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3180esr_2015062417_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3180esr_2015062417_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3201_2014091023_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3201_2014091023_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3201_2014091023_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3201_2014091117_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3201_2014091117_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3201_2014091117_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3202_2014091722_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3202_2014091722_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3202_2014091722_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3203_2014092320_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3203_2014092320_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3203_2014092320_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3311_2014111317_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3311_2014111317_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3311_2014111317_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3405_2014112606_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3405_2014112606_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3405_2014112606_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3501_2015012300_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3501_2015012300_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3501_2015012300_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3601_2015030416_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3601_2015030416_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3601_2015030416_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3601_2015030504_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3601_2015030504_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3601_2015030504_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3603_2015031922_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3603_2015031922_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3603_2015031922_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3604_2015032022_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3604_2015032022_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3604_2015032022_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3701_2015040222_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3701_2015040222_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3701_2015040222_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3702_2015041516_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3702_2015041516_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3702_2015041516_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3805_2015052119_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3805_2015052119_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3805_2015052119_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3805_2015052120_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3805_2015052120_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3805_2015052120_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3805_2015052516_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3805_2015052516_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3805_2015052516_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3806_2015060512_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3806_2015060512_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3806_2015060512_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3810esr_2015062417_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3810esr_2015062417_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3810esr_2015062417_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3810esr_2015070616_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3810esr_2015070616_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3810esr_2015070616_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3820esr_2015080322_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3820esr_2015080322_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3820esr_2015080322_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3820esr_2015080613_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3820esr_2015080613_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3820esr_2015080613_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3830esr_2015091419_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3830esr_2015091419_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3830esr_2015091419_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3830esr_2015091612_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3830esr_2015091612_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3830esr_2015091612_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3840esr_2015102712_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3840esr_2015102712_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3840esr_2015102712_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3840esr_2015102720_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3840esr_2015102720_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3840esr_2015102720_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3850esr_2015121010_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3850esr_2015121010_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3850esr_2015121010_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3850esr_2015121418_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3850esr_2015121418_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3850esr_2015121418_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3851esr_2015121812_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3851esr_2015121812_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3851esr_2015121812_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3852esr_2015122118_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3852esr_2015122118_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3852esr_2015122118_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3860esr_2016012100_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3860esr_2016012100_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3860esr_2016012100_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3870esr_2016030220_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3870esr_2016030220_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3870esr_2016030220_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3871esr_2016031517_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3871esr_2016031517_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3871esr_2016031517_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO3880esr_2016042017_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO3880esr_2016042017_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO3880esr_2016042017_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4001_2015081122_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4001_2015081122_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4001_2015081122_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4002_2015081219_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4002_2015081219_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4002_2015081219_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4003_2015082605_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4003_2015082605_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4003_2015082605_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4101_2015092818_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4101_2015092818_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4101_2015092818_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4101_2015092917_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4101_2015092917_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4101_2015092917_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4102_2015101322_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4102_2015101322_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4102_2015101322_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4102_2015101417_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4102_2015101417_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4102_2015101417_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4301_2015121620_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4301_2015121620_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4301_2015121620_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4302_2015122116_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4302_2015122116_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4302_2015122116_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4303_2015122316_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4303_2015122316_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4303_2015122316_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4304_2016010417_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4304_2016010417_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4304_2016010417_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4304_2016010515_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4304_2016010515_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4304_2016010515_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4304_2016010519_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4304_2016010519_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4304_2016010519_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4401_2016020419_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4401_2016020419_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4401_2016020419_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4401_2016020518_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4401_2016020518_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4401_2016020518_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4402_2016020915_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4402_2016020915_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4402_2016020915_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4402_2016020917_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4402_2016020917_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4402_2016020917_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4402_2016021018_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4402_2016021018_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4402_2016021018_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4501esr_2016031518_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4501esr_2016031518_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4501esr_2016031518_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4501esr_2016031618_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4501esr_2016031618_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4501esr_2016031618_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4501_2016031518_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4501_2016031518_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4501_2016031518_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4502esr_2016041116_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4502esr_2016041116_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4502esr_2016041116_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4502_2016040719_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4502_2016040719_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4502_2016040719_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4510esr_2016042017_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4510esr_2016042017_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4510esr_2016042017_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4511esr_2016050218_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4511esr_2016050218_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4511esr_2016050218_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/GECKO4520esr_2016060214_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="GECKO4520esr_2016060214_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                GECKO4520esr_2016060214_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE60_2011071316_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE60_2011071316_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE60_2011071316_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE60_2011072110_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE60_2011072110_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE60_2011072110_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE60_2011072114_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE60_2011072114_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE60_2011072114_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE60_2011072907_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE60_2011072907_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE60_2011072907_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE60_2011080402_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE60_2011080402_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE60_2011080402_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE60_2011081016_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE60_2011081016_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE60_2011081016_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE60_2011081116_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE60_2011081116_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE60_2011081116_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE70_2011081614_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE70_2011081614_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE70_2011081614_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE70_2011082416_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE70_2011082416_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE70_2011082416_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE70_2011083009_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE70_2011083009_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE70_2011083009_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE70_2011083111_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE70_2011083111_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE70_2011083111_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE70_2011090812_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE70_2011090812_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE70_2011090812_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE70_2011091608_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE70_2011091608_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE70_2011091608_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE70_2011092210_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE70_2011092210_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE70_2011092210_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE80_2011092805_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE80_2011092805_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE80_2011092805_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE80_2011100517_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE80_2011100517_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE80_2011100517_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE80_2011101117_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE80_2011101117_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE80_2011101117_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE80_2011101907_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE80_2011101907_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE80_2011101907_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE80_2011102618_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE80_2011102618_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE80_2011102618_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE80_2011103117_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE80_2011103117_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE80_2011103117_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE80_2011110415_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE80_2011110415_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE80_2011110415_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE90_2011110909_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE90_2011110909_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE90_2011110909_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE90_2011111608_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE90_2011111608_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE90_2011111608_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE90_2011112218_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE90_2011112218_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE90_2011112218_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE90_2011113006_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE90_2011113006_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE90_2011113006_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE90_2011120622_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE90_2011120622_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE90_2011120622_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE90_2011121217_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE90_2011121217_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE90_2011121217_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE90_2011121612_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE90_2011121612_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE90_2011121612_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE100_2011122112_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE100_2011122112_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE100_2011122112_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE100_2011122805_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE100_2011122805_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE100_2011122805_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE100_2012010318_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE100_2012010318_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE100_2012010318_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE100_2012010410_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE100_2012010410_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE100_2012010410_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE100_2012011108_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE100_2012011108_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE100_2012011108_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE100_2012011807_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE100_2012011807_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE100_2012011807_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE100_2012012323_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE100_2012012323_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE100_2012012323_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE100_2012012901_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE100_2012012901_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE100_2012012901_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE110_2012020115_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE110_2012020115_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE110_2012020115_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE110_2012020801_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE110_2012020801_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE110_2012020801_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE110_2012021420_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE110_2012021420_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE110_2012021420_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE110_2012021522_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE110_2012021522_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE110_2012021522_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE110_2012022207_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE110_2012022207_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE110_2012022207_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE110_2012022820_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE110_2012022820_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE110_2012022820_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE110_2012030517_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE110_2012030517_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE110_2012030517_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE120_2012031407_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE120_2012031407_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE120_2012031407_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE120_2012031419_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE120_2012031419_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE120_2012031419_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE120_2012032021_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE120_2012032021_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE120_2012032021_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE120_2012032804_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE120_2012032804_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE120_2012032804_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE120_2012040320_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE120_2012040320_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE120_2012040320_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE120_2012041106_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE120_2012041106_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE120_2012041106_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE120_2012041716_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE120_2012041716_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE120_2012041716_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE130_2012042512_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE130_2012042512_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE130_2012042512_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE130_2012042709_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE130_2012042709_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE130_2012042709_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE130_2012050119_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE130_2012050119_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE130_2012050119_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE130_2012050817_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE130_2012050817_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE130_2012050817_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE140_2012060523_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE140_2012060523_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE140_2012060523_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE140_2012061216_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE140_2012061216_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE140_2012061216_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE140_2012061918_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE140_2012061918_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE140_2012061918_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE140_2012062805_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE140_2012062805_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE140_2012062805_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE140_2012062810_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE140_2012062810_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE140_2012062810_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE140_2012070414_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE140_2012070414_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE140_2012070414_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE140_2012071012_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE140_2012071012_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE140_2012071012_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE150_2012071710_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE150_2012071710_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE150_2012071710_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE150_2012072419_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE150_2012072419_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE150_2012072419_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE150_2012073114_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE150_2012073114_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE150_2012073114_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE150_2012080812_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE150_2012080812_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE150_2012080812_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE150_2012081422_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE150_2012081422_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE150_2012081422_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE150_2012082116_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE150_2012082116_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE150_2012082116_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE150_2012082314_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE150_2012082314_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE150_2012082314_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE150_2012082415_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE150_2012082415_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE150_2012082415_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE160_2012082808_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE160_2012082808_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE160_2012082808_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE160_2012090412_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE160_2012090412_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE160_2012090412_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE160_2012091123_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE160_2012091123_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE160_2012091123_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE160_2012091906_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE160_2012091906_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE160_2012091906_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE160_2012092520_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE160_2012092520_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE160_2012092520_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE160_2012100207_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE160_2012100207_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE160_2012100207_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE160_2012100515_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE160_2012100515_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE160_2012100515_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE170_2012100914_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE170_2012100914_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE170_2012100914_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE170_2012101021_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE170_2012101021_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE170_2012101021_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE170_2012101707_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE170_2012101707_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE170_2012101707_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE170_2012102312_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE170_2012102312_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE170_2012102312_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE170_2012103106_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE170_2012103106_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE170_2012103106_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE170_2012110619_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE170_2012110619_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE170_2012110619_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE170_2012111306_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE170_2012111306_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE170_2012111306_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE170_2012111605_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE170_2012111605_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE170_2012111605_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE170_2012111611_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE170_2012111611_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE170_2012111611_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE180_2012112113_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE180_2012112113_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE180_2012112113_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE180_2012112808_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE180_2012112808_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE180_2012112808_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE180_2012120508_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE180_2012120508_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE180_2012120508_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE180_2012121210_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE180_2012121210_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE180_2012121210_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE180_2012121317_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE180_2012121317_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE180_2012121317_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE180_2012121910_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE180_2012121910_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE180_2012121910_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE180_2012122710_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE180_2012122710_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE180_2012122710_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE180_2012123109_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE180_2012123109_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE180_2012123109_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE180_2013010418_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE180_2013010418_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE180_2013010418_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE190_2013010812_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE190_2013010812_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE190_2013010812_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE190_2013010816_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE190_2013010816_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE190_2013010816_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE190_2013011610_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE190_2013011610_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE190_2013011610_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE190_2013012311_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE190_2013012311_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE190_2013012311_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE190_2013013010_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE190_2013013010_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE190_2013013010_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE190_2013020611_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE190_2013020611_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE190_2013020611_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE190_2013020621_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE190_2013020621_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE190_2013020621_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE190_2013021211_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE190_2013021211_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE190_2013021211_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE190_2013021515_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE190_2013021515_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE190_2013021515_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE200_2013022008_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE200_2013022008_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE200_2013022008_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE200_2013022119_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE200_2013022119_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE200_2013022119_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE200_2013022215_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE200_2013022215_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE200_2013022215_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE200_2013032617_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE200_2013032617_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE200_2013032617_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE210_2013050704_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE210_2013050704_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE210_2013050704_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE210_2013050901_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE210_2013050901_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE210_2013050901_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE220_2013061806_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE220_2013061806_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE220_2013061806_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE230_2013073014_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE230_2013073014_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE230_2013073014_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE240_2013091115_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE240_2013091115_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE240_2013091115_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE250_2013102121_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE250_2013102121_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE250_2013102121_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE250_2013102300_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE250_2013102300_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE250_2013102300_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE250_2013102517_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE250_2013102517_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE250_2013102517_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE260_2013120223_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE260_2013120223_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE260_2013120223_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE260_2013120510_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE260_2013120510_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE260_2013120510_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE270_2014012816_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE270_2014012816_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE270_2014012816_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE280_2014031500_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE280_2014031500_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE280_2014031500_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE290_2014042416_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE290_2014042416_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE290_2014042416_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE300_2014060520_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE300_2014060520_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE300_2014060520_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE310_2014071714_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE310_2014071714_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE310_2014071714_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE320_2014082615_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE320_2014082615_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE320_2014082615_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE330_2014100810_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE330_2014100810_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE330_2014100810_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE330_2014101104_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE330_2014101104_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE330_2014101104_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE331_2014110511_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE331_2014110511_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE331_2014110511_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE331_2014110613_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE331_2014110613_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE331_2014110613_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE340_2014112423_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE340_2014112423_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE340_2014112423_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE340_2014112520_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE340_2014112520_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE340_2014112520_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE340_2014112618_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE340_2014112618_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE340_2014112618_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE350_2015010823_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE350_2015010823_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE350_2015010823_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE360_2015021920_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE360_2015021920_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE360_2015021920_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE360_2015022513_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE360_2015022513_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE360_2015022513_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE370_2015032520_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE370_2015032520_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE370_2015032520_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE390_2015062418_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE390_2015062418_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE390_2015062418_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE390_2015062601_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE390_2015062601_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE390_2015062601_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE400_2015080510_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE400_2015080510_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE400_2015080510_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE410_2015091517_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE410_2015091517_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE410_2015091517_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE410_2015091623_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE410_2015091623_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE410_2015091623_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE410_2015091718_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE410_2015091718_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE410_2015091718_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE420_2015102816_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE420_2015102816_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE420_2015102816_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE420_2015102820_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE420_2015102820_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE420_2015102820_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE420_2015102905_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE420_2015102905_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE420_2015102905_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE430_2015121011_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE430_2015121011_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE430_2015121011_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE430_2015121419_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE430_2015121419_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE430_2015121419_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE440_2016012018_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE440_2016012018_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE440_2016012018_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE450_2016030216_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE450_2016030216_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE450_2016030216_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE450_2016030304_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE450_2016030304_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE450_2016030304_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE450_2016030316_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE450_2016030316_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE450_2016030316_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE460_2016042213_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE460_2016042213_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE460_2016042213_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE470_2016060220_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE470_2016060220_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE470_2016060220_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE470_2016060422_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE470_2016060422_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE470_2016060422_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE480_2016072616_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE480_2016072616_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE480_2016072616_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE490_2016090808_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE490_2016090808_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE490_2016090808_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE490_2016091217_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE490_2016091217_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE490_2016091217_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE490_2016091613_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE490_2016091613_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE490_2016091613_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE500_2016110523_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE500_2016110523_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE500_2016110523_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE510_2017011707_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE510_2017011707_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE510_2017011707_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE510_2017011818_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE510_2017011818_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE510_2017011818_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE510_2017011915_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE510_2017011915_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE510_2017011915_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE520_2017030210_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE520_2017030210_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE520_2017030210_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE520_2017030217_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE520_2017030217_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE520_2017030217_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE520_2017030305_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE520_2017030305_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE520_2017030305_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE601_2011083008_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE601_2011083008_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE601_2011083008_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE602_2011083111_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE602_2011083111_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE602_2011083111_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE701_2011092812_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE701_2011092812_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE701_2011092812_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE1001_2012020805_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE1001_2012020805_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE1001_2012020805_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE1002_2012021522_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE1002_2012021522_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE1002_2012021522_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE1401_2012071313_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE1401_2012071313_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE1401_2012071313_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE1401_2012071316_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE1401_2012071316_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE1401_2012071316_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE1402_2012080109_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE1402_2012080109_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE1402_2012080109_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE1402_2012080617_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE1402_2012080617_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE1402_2012080617_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE1501_2012090514_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE1501_2012090514_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE1501_2012090514_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE1501_2012090620_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE1501_2012090620_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE1501_2012090620_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE1601_2012101014_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE1601_2012101014_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE1601_2012101014_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE1602_2012102407_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE1602_2012102407_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE1602_2012102407_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE1701_2012112820_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE1701_2012112820_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE1701_2012112820_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE1802_2013020621_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE1802_2013020621_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE1802_2013020621_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE1901_2013030614_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE1901_2013030614_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE1901_2013030614_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE1902_2013030705_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE1902_2013030705_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE1902_2013030705_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE2001_2013041018_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE2001_2013041018_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE2001_2013041018_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE2501_2013111218_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE2501_2013111218_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE2501_2013111218_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE2601_2013121917_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE2601_2013121917_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE2601_2013121917_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE2601_2013121920_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE2601_2013121920_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE2601_2013121920_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE2801_2014032118_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE2801_2014032118_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE2801_2014032118_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE2901_2014050600_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE2901_2014050600_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE2901_2014050600_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE3201_2014090921_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE3201_2014090921_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE3201_2014090921_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE3203_2014092320_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE3203_2014092320_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE3203_2014092320_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE3401_2014121722_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE3401_2014121722_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE3401_2014121722_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE3401_2014121819_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE3401_2014121819_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE3401_2014121819_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE3501_2015020504_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE3501_2015020504_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE3501_2015020504_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE3601_2015030417_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE3601_2015030417_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE3601_2015030417_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE3601_2015030509_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE3601_2015030509_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE3601_2015030509_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE3602_2015031211_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE3602_2015031211_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE3602_2015031211_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE3602_2015031403_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE3602_2015031403_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE3602_2015031403_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE3603_2015031922_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE3603_2015031922_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE3603_2015031922_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE3604_2015032022_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE3604_2015032022_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE3604_2015032022_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE3701_2015040222_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE3701_2015040222_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE3701_2015040222_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE3702_2015041320_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE3702_2015041320_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE3702_2015041320_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE3805_2015052804_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE3805_2015052804_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE3805_2015052804_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE3901_2015070520_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE3901_2015070520_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE3901_2015070520_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE3901_2015070622_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE3901_2015070622_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE3901_2015070622_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE3902_2015071316_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE3902_2015071316_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE3902_2015071316_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE4003_2015082703_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE4003_2015082703_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE4003_2015082703_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE4102_2015101322_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE4102_2015101322_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE4102_2015101322_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE4102_2015101417_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE4102_2015101417_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE4102_2015101417_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE4201_2015111905_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE4201_2015111905_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE4201_2015111905_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE4202_2015120112_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE4202_2015120112_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE4202_2015120112_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE4301_2015121519_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE4301_2015121519_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE4301_2015121519_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE4402_2016020915_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE4402_2016020915_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE4402_2016020915_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE4402_2016020917_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE4402_2016020917_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE4402_2016020917_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE4402_2016020922_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE4402_2016020922_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE4402_2016020922_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE4402_2016021011_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE4402_2016021011_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE4402_2016021011_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE4501_2016031519_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE4501_2016031519_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE4501_2016031519_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE4502_2016040719_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE4502_2016040719_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE4502_2016040719_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE4601_2016050218_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE4601_2016050218_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE4601_2016050218_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE4803_2016090208_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE4803_2016090208_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE4803_2016090208_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE4902_2016101815_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE4902_2016101815_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE4902_2016101815_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE4902_2016101919_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE4902_2016101919_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE4902_2016101919_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE5001_2016112401_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE5001_2016112401_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE5001_2016112401_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE5002_2016112921_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE5002_2016112921_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE5002_2016112921_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE5010_2016120721_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE5010_2016120721_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE5010_2016120721_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE5010_2016120821_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE5010_2016120821_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE5010_2016120821_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE5102_2017020604_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE5102_2017020604_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE5102_2017020604_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE5103_2017020816_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE5103_2017020816_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE5103_2017020816_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE5104_2017021320_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE5104_2017021320_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE5104_2017021320_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/MOBILE5201_2017031701_RELBRANCH/dom/events/UIEvent.cpp"
               data-name="MOBILE5201_2017031701_RELBRANCH"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                MOBILE5201_2017031701_RELBRANCH
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/aurora/dom/events/UIEvent.cpp"
               data-name="aurora"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                aurora
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g-inbound/dom/events/UIEvent.cpp"
               data-name="b2g-inbound"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g-inbound
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g-ota/dom/events/UIEvent.cpp"
               data-name="b2g-ota"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g-ota
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g18_v1_0_0/dom/events/UIEvent.cpp"
               data-name="b2g18_v1_0_0"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g18_v1_0_0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g18_v1_0_1/dom/events/UIEvent.cpp"
               data-name="b2g18_v1_0_1"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g18_v1_0_1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g18_v1_1_0_hd/dom/events/UIEvent.cpp"
               data-name="b2g18_v1_1_0_hd"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g18_v1_1_0_hd
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g18/dom/events/UIEvent.cpp"
               data-name="b2g18"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g18
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g26_v1_2f/dom/events/UIEvent.cpp"
               data-name="b2g26_v1_2f"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g26_v1_2f
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g26_v1_2/dom/events/UIEvent.cpp"
               data-name="b2g26_v1_2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g26_v1_2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g28_v1_3t/dom/events/UIEvent.cpp"
               data-name="b2g28_v1_3t"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g28_v1_3t
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g28_v1_3/dom/events/UIEvent.cpp"
               data-name="b2g28_v1_3"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g28_v1_3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g30_v1_4/dom/events/UIEvent.cpp"
               data-name="b2g30_v1_4"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g30_v1_4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g32_v2_0m/dom/events/UIEvent.cpp"
               data-name="b2g32_v2_0m"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g32_v2_0m
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g32_v2_0/dom/events/UIEvent.cpp"
               data-name="b2g32_v2_0"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g32_v2_0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g34_v2_1s/dom/events/UIEvent.cpp"
               data-name="b2g34_v2_1s"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g34_v2_1s
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g34_v2_1/dom/events/UIEvent.cpp"
               data-name="b2g34_v2_1"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g34_v2_1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g37_v2_2r/dom/events/UIEvent.cpp"
               data-name="b2g37_v2_2r"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g37_v2_2r
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g37_v2_2/dom/events/UIEvent.cpp"
               data-name="b2g37_v2_2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g37_v2_2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/b2g44_v2_5/dom/events/UIEvent.cpp"
               data-name="b2g44_v2_5"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                b2g44_v2_5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/beta/dom/events/UIEvent.cpp"
               data-name="beta"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                beta
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/esr17/dom/events/UIEvent.cpp"
               data-name="esr17"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                esr17
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/esr24/dom/events/UIEvent.cpp"
               data-name="esr24"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                esr24
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/esr31/dom/events/UIEvent.cpp"
               data-name="esr31"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                esr31
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/esr38/dom/events/UIEvent.cpp"
               data-name="esr38"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                esr38
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/esr45/dom/events/UIEvent.cpp"
               data-name="esr45"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                esr45
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/esr52/dom/events/UIEvent.cpp"
               data-name="esr52"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                esr52
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/fx-team/dom/events/UIEvent.cpp"
               data-name="fx-team"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fx-team
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/inbound/dom/events/UIEvent.cpp"
               data-name="inbound"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                inbound
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/loop-ser/dom/events/UIEvent.cpp"
               data-name="loop-ser"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                loop-ser
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/master/dom/events/UIEvent.cpp"
               data-name="master"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                master
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/mozilla-b2g26_v1_2/dom/events/UIEvent.cpp"
               data-name="mozilla-b2g26_v1_2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mozilla-b2g26_v1_2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/release/dom/events/UIEvent.cpp"
               data-name="release"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                release
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mozilla/gecko-dev/blob/tiling/dom/events/UIEvent.cpp"
               data-name="tiling"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tiling
              </span>
            </a>
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20140602/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20140602"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20140602">
                RELEASE_BASE_20140602
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20140421/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20140421"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20140421">
                RELEASE_BASE_20140421
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20140310/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20140310"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20140310">
                RELEASE_BASE_20140310
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20140127/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20140127"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20140127">
                RELEASE_BASE_20140127
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20131202/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20131202"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20131202">
                RELEASE_BASE_20131202
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20131021/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20131021"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20131021">
                RELEASE_BASE_20131021
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20130909/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20130909"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20130909">
                RELEASE_BASE_20130909
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20130729/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20130729"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20130729">
                RELEASE_BASE_20130729
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20130617/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20130617"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20130617">
                RELEASE_BASE_20130617
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20130506/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20130506"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20130506">
                RELEASE_BASE_20130506
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20130326/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20130326"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20130326">
                RELEASE_BASE_20130326
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20130214/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20130214"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20130214">
                RELEASE_BASE_20130214
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20130103/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20130103"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20130103">
                RELEASE_BASE_20130103
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20121114/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20121114"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20121114">
                RELEASE_BASE_20121114
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20121005/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20121005"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20121005">
                RELEASE_BASE_20121005
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20120824/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20120824"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20120824">
                RELEASE_BASE_20120824
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20120713/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20120713"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20120713">
                RELEASE_BASE_20120713
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20120531/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20120531"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20120531">
                RELEASE_BASE_20120531
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20120420/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20120420"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20120420">
                RELEASE_BASE_20120420
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20120308/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20120308"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20120308">
                RELEASE_BASE_20120308
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20120128/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20120128"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20120128">
                RELEASE_BASE_20120128
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20111216/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20111216"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20111216">
                RELEASE_BASE_20111216
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20111104/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20111104"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20111104">
                RELEASE_BASE_20111104
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20110922/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20110922"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20110922">
                RELEASE_BASE_20110922
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/RELEASE_BASE_20110811/dom/events/UIEvent.cpp"
              data-name="RELEASE_BASE_20110811"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="RELEASE_BASE_20110811">
                RELEASE_BASE_20110811
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_5_20160125_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_5_20160125_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_5_20160125_MERGEDAY">
                B2G_2_5_20160125_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_5_20151214_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_5_20151214_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_5_20151214_MERGEDAY">
                B2G_2_5_20151214_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_2_20151214_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_2_20151214_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_2_20151214_MERGEDAY">
                B2G_2_2_20151214_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_2_20151029_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_2_20151029_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_2_20151029_MERGEDAY">
                B2G_2_2_20151029_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_2_20150921_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_2_20150921_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_2_20150921_MERGEDAY">
                B2G_2_2_20150921_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_2_20150810_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_2_20150810_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_2_20150810_MERGEDAY">
                B2G_2_2_20150810_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_2_20150629_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_2_20150629_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_2_20150629_MERGEDAY">
                B2G_2_2_20150629_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_2_20150511_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_2_20150511_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_2_20150511_MERGEDAY">
                B2G_2_2_20150511_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_2_20150223_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_2_20150223_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_2_20150223_MERGEDAY">
                B2G_2_2_20150223_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_2r_20151214_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_2r_20151214_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_2r_20151214_MERGEDAY">
                B2G_2_2r_20151214_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_2r_20151029_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_2r_20151029_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_2r_20151029_MERGEDAY">
                B2G_2_2r_20151029_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_2r_20150921_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_2r_20150921_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_2r_20150921_MERGEDAY">
                B2G_2_2r_20150921_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_2r_20150810_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_2r_20150810_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_2r_20150810_MERGEDAY">
                B2G_2_2r_20150810_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_1_20150629_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_1_20150629_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_1_20150629_MERGEDAY">
                B2G_2_1_20150629_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_1_20150511_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_1_20150511_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_1_20150511_MERGEDAY">
                B2G_2_1_20150511_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_1_20150223_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_1_20150223_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_1_20150223_MERGEDAY">
                B2G_2_1_20150223_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_1_20150112_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_1_20150112_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_1_20150112_MERGEDAY">
                B2G_2_1_20150112_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_1_20141013_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_1_20141013_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_1_20141013_MERGEDAY">
                B2G_2_1_20141013_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_1_20140902_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_1_20140902_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_1_20140902_MERGEDAY">
                B2G_2_1_20140902_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_1s_20150810_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_1s_20150810_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_1s_20150810_MERGEDAY">
                B2G_2_1s_20150810_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_1s_20150629_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_1s_20150629_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_1s_20150629_MERGEDAY">
                B2G_2_1s_20150629_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_1s_20150511_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_1s_20150511_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_1s_20150511_MERGEDAY">
                B2G_2_1s_20150511_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_1s_20150223_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_1s_20150223_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_1s_20150223_MERGEDAY">
                B2G_2_1s_20150223_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_1s_END/dom/events/UIEvent.cpp"
              data-name="B2G_2_1s_END"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_1s_END">
                B2G_2_1s_END
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_1_END/dom/events/UIEvent.cpp"
              data-name="B2G_2_1_END"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_1_END">
                B2G_2_1_END
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_0_20150629_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_0_20150629_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_0_20150629_MERGEDAY">
                B2G_2_0_20150629_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_0_20150511_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_0_20150511_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_0_20150511_MERGEDAY">
                B2G_2_0_20150511_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_0_20150223_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_0_20150223_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_0_20150223_MERGEDAY">
                B2G_2_0_20150223_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_0_20150112_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_0_20150112_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_0_20150112_MERGEDAY">
                B2G_2_0_20150112_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_0_20141013_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_0_20141013_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_0_20141013_MERGEDAY">
                B2G_2_0_20141013_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_0_20140902_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_0_20140902_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_0_20140902_MERGEDAY">
                B2G_2_0_20140902_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_0_20140721_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_0_20140721_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_0_20140721_MERGEDAY">
                B2G_2_0_20140721_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_0_20140609_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_2_0_20140609_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_0_20140609_MERGEDAY">
                B2G_2_0_20140609_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_0M_END/dom/events/UIEvent.cpp"
              data-name="B2G_2_0M_END"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_0M_END">
                B2G_2_0M_END
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_2_0_END/dom/events/UIEvent.cpp"
              data-name="B2G_2_0_END"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_2_0_END">
                B2G_2_0_END
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_4_20150511_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_4_20150511_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_4_20150511_MERGEDAY">
                B2G_1_4_20150511_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_4_20150330_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_4_20150330_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_4_20150330_MERGEDAY">
                B2G_1_4_20150330_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_4_20150223_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_4_20150223_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_4_20150223_MERGEDAY">
                B2G_1_4_20150223_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_4_20150112_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_4_20150112_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_4_20150112_MERGEDAY">
                B2G_1_4_20150112_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_4_20141013_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_4_20141013_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_4_20141013_MERGEDAY">
                B2G_1_4_20141013_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_4_20140902_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_4_20140902_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_4_20140902_MERGEDAY">
                B2G_1_4_20140902_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_4_20140721_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_4_20140721_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_4_20140721_MERGEDAY">
                B2G_1_4_20140721_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_4_20140609_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_4_20140609_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_4_20140609_MERGEDAY">
                B2G_1_4_20140609_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_4_20140428_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_4_20140428_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_4_20140428_MERGEDAY">
                B2G_1_4_20140428_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_4_20140317_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_4_20140317_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_4_20140317_MERGEDAY">
                B2G_1_4_20140317_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_3_20140902_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_3_20140902_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_3_20140902_MERGEDAY">
                B2G_1_3_20140902_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_3_20140721_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_3_20140721_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_3_20140721_MERGEDAY">
                B2G_1_3_20140721_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_3_20140609_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_3_20140609_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_3_20140609_MERGEDAY">
                B2G_1_3_20140609_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_3_20140428_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_3_20140428_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_3_20140428_MERGEDAY">
                B2G_1_3_20140428_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_3_20140317_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_3_20140317_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_3_20140317_MERGEDAY">
                B2G_1_3_20140317_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_3_20140203_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_3_20140203_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_3_20140203_MERGEDAY">
                B2G_1_3_20140203_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_3T_20141013_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_3T_20141013_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_3T_20141013_MERGEDAY">
                B2G_1_3T_20141013_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_3T_20140902_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_3T_20140902_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_3T_20140902_MERGEDAY">
                B2G_1_3T_20140902_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_3T_20140721_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_3T_20140721_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_3T_20140721_MERGEDAY">
                B2G_1_3T_20140721_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_3T_20140609_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_3T_20140609_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_3T_20140609_MERGEDAY">
                B2G_1_3T_20140609_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_3T_20140428_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_3T_20140428_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_3T_20140428_MERGEDAY">
                B2G_1_3T_20140428_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_3T_20140317_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_3T_20140317_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_3T_20140317_MERGEDAY">
                B2G_1_3T_20140317_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_2_20140428_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_2_20140428_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_2_20140428_MERGEDAY">
                B2G_1_2_20140428_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_2_20140317_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_2_20140317_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_2_20140317_MERGEDAY">
                B2G_1_2_20140317_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_2_20140203_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_2_20140203_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_2_20140203_MERGEDAY">
                B2G_1_2_20140203_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_1_20140428_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_1_20140428_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_1_20140428_MERGEDAY">
                B2G_1_1_20140428_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_1_20140317_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_1_20140317_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_1_20140317_MERGEDAY">
                B2G_1_1_20140317_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_1_20140203_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_1_20140203_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_1_20140203_MERGEDAY">
                B2G_1_1_20140203_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_1_0_hd_20140428_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_1_0_hd_20140428_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_1_0_hd_20140428_MERGEDAY">
                B2G_1_1_0_hd_20140428_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_1_0_hd_20140317_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_1_0_hd_20140317_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_1_0_hd_20140317_MERGEDAY">
                B2G_1_1_0_hd_20140317_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_1_0_hd_20140203_MERGEDAY/dom/events/UIEvent.cpp"
              data-name="B2G_1_1_0_hd_20140203_MERGEDAY"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_1_0_hd_20140203_MERGEDAY">
                B2G_1_1_0_hd_20140203_MERGEDAY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_1_0_hd_20130530182315/dom/events/UIEvent.cpp"
              data-name="B2G_1_1_0_hd_20130530182315"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_1_0_hd_20130530182315">
                B2G_1_1_0_hd_20130530182315
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_1_0_hd_20130530182315_BASE/dom/events/UIEvent.cpp"
              data-name="B2G_1_1_0_hd_20130530182315_BASE"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_1_0_hd_20130530182315_BASE">
                B2G_1_1_0_hd_20130530182315_BASE
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_0_1_20130217163900/dom/events/UIEvent.cpp"
              data-name="B2G_1_0_1_20130217163900"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_0_1_20130217163900">
                B2G_1_0_1_20130217163900
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_0_1_20130213094222/dom/events/UIEvent.cpp"
              data-name="B2G_1_0_1_20130213094222"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_0_1_20130213094222">
                B2G_1_0_1_20130213094222
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_0_1_20130213094222_BASE/dom/events/UIEvent.cpp"
              data-name="B2G_1_0_1_20130213094222_BASE"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_0_1_20130213094222_BASE">
                B2G_1_0_1_20130213094222_BASE
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_0_0_20130125190500/dom/events/UIEvent.cpp"
              data-name="B2G_1_0_0_20130125190500"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_0_0_20130125190500">
                B2G_1_0_0_20130125190500
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mozilla/gecko-dev/tree/B2G_1_0_0_20130115070201/dom/events/UIEvent.cpp"
              data-name="B2G_1_0_0_20130115070201"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="B2G_1_0_0_20130115070201">
                B2G_1_0_0_20130115070201
              </span>
            </a>
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

  <div class="BtnGroup float-right">
    <a href="/mozilla/gecko-dev/find/d61e0b9cedfc1b603afac8364c236da4d5eec145"
          class="js-pjax-capture-input btn btn-sm BtnGroup-item"
          data-pjax
          data-hotkey="t">
      Find file
    </a>
    <button aria-label="Copy file path to clipboard" class="js-zeroclipboard btn btn-sm BtnGroup-item tooltipped tooltipped-s" data-copied-hint="Copied!" type="button">Copy path</button>
  </div>
  <div class="breadcrumb js-zeroclipboard-target">
    <span class="repo-root js-repo-root"><span class="js-path-segment"><a href="/mozilla/gecko-dev/tree/d61e0b9cedfc1b603afac8364c236da4d5eec145"><span>gecko-dev</span></a></span></span><span class="separator">/</span><span class="js-path-segment"><a href="/mozilla/gecko-dev/tree/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom"><span>dom</span></a></span><span class="separator">/</span><span class="js-path-segment"><a href="/mozilla/gecko-dev/tree/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events"><span>events</span></a></span><span class="separator">/</span><strong class="final-path">UIEvent.cpp</strong>
  </div>
</div>



  <div class="commit-tease">
      <span class="float-right">
        <a class="commit-tease-sha" href="/mozilla/gecko-dev/commit/87d8470a5216b7c6f55d044511950b6838fefeeb" data-pjax>
          87d8470
        </a>
        <relative-time datetime="2017-03-14T09:29:39Z">Mar 14, 2017</relative-time>
      </span>
      <div>
        <img alt="@masayuki-nakano" class="avatar" height="20" src="https://avatars2.githubusercontent.com/u/8064604?v=3&amp;s=40" width="20" />
        <a href="/masayuki-nakano" class="user-mention" rel="contributor">masayuki-nakano</a>
          <a href="/mozilla/gecko-dev/commit/87d8470a5216b7c6f55d044511950b6838fefeeb" class="message" data-pjax="true" title="Bug 1347073 Get rid of UIEvent.isChar since it&#39;s not initialized properly on most platforms and the other browsers don&#39;t support this r=smaug

UIEvent.isChar is not supported by the other browsers and the value isn&#39;t initialized any platforms except on macOS. So, the value isn&#39;t useful and we have no reason to keep it.

MozReview-Commit-ID: 4BLpo88gSZj

--HG--
extra : rebase_source : ca950f8cb618a0cadc99ba4c80b5a8df94a20f27">Bug 1347073 Get rid of UIEvent.isChar since it's not initialized prop…</a>
      </div>

    <div class="commit-tease-contributors">
      <button type="button" class="btn-link muted-link contributors-toggle" data-facebox="#blob_contributors_box">
        <strong>14</strong>
        recent contributors
      </button>
          <a class="avatar-link tooltipped tooltipped-s" aria-label="masayuki-nakano" href="/mozilla/gecko-dev/commits/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp?author=masayuki-nakano"><img alt="@masayuki-nakano" class="avatar" height="20" src="https://avatars2.githubusercontent.com/u/8064604?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="mingchou" href="/mozilla/gecko-dev/commits/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp?author=mingchou"><img alt="@mingchou" class="avatar" height="20" src="https://avatars2.githubusercontent.com/u/9312843?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="khuey" href="/mozilla/gecko-dev/commits/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp?author=khuey"><img alt="@khuey" class="avatar" height="20" src="https://avatars1.githubusercontent.com/u/325892?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="froydnj" href="/mozilla/gecko-dev/commits/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp?author=froydnj"><img alt="@froydnj" class="avatar" height="20" src="https://avatars2.githubusercontent.com/u/151096?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="ayg" href="/mozilla/gecko-dev/commits/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp?author=ayg"><img alt="@ayg" class="avatar" height="20" src="https://avatars2.githubusercontent.com/u/940446?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="saneyuki" href="/mozilla/gecko-dev/commits/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp?author=saneyuki"><img alt="@saneyuki" class="avatar" height="20" src="https://avatars3.githubusercontent.com/u/180104?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="rvandermeulen" href="/mozilla/gecko-dev/commits/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp?author=rvandermeulen"><img alt="@rvandermeulen" class="avatar" height="20" src="https://avatars0.githubusercontent.com/u/3661247?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="bluemarvin" href="/mozilla/gecko-dev/commits/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp?author=bluemarvin"><img alt="@bluemarvin" class="avatar" height="20" src="https://avatars1.githubusercontent.com/u/3066?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="ornew" href="/mozilla/gecko-dev/commits/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp?author=ornew"><img alt="@ornew" class="avatar" height="20" src="https://avatars2.githubusercontent.com/u/19766770?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="dzbarsky" href="/mozilla/gecko-dev/commits/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp?author=dzbarsky"><img alt="@dzbarsky" class="avatar" height="20" src="https://avatars1.githubusercontent.com/u/1565842?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="amccreight" href="/mozilla/gecko-dev/commits/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp?author=amccreight"><img alt="@amccreight" class="avatar" height="20" src="https://avatars3.githubusercontent.com/u/841072?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="poiru" href="/mozilla/gecko-dev/commits/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp?author=poiru"><img alt="@poiru" class="avatar" height="20" src="https://avatars0.githubusercontent.com/u/1319028?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="bill-mccloskey" href="/mozilla/gecko-dev/commits/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp?author=bill-mccloskey"><img alt="@bill-mccloskey" class="avatar" height="20" src="https://avatars3.githubusercontent.com/u/6353756?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="aidin36" href="/mozilla/gecko-dev/commits/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp?author=aidin36"><img alt="@aidin36" class="avatar" height="20" src="https://avatars0.githubusercontent.com/u/3810651?v=3&amp;s=40" width="20" /> </a>


    </div>

    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header" data-facebox-id="facebox-header">Users who have contributed to this file recently</h2>
      <ul class="facebox-user-list" data-facebox-id="facebox-description">
          <li class="facebox-user-list-item">
            <img alt="@masayuki-nakano" height="24" src="https://avatars0.githubusercontent.com/u/8064604?v=3&amp;s=48" width="24" />
            <a href="/masayuki-nakano">masayuki-nakano</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@mingchou" height="24" src="https://avatars0.githubusercontent.com/u/9312843?v=3&amp;s=48" width="24" />
            <a href="/mingchou">mingchou</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@khuey" height="24" src="https://avatars3.githubusercontent.com/u/325892?v=3&amp;s=48" width="24" />
            <a href="/khuey">khuey</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@froydnj" height="24" src="https://avatars0.githubusercontent.com/u/151096?v=3&amp;s=48" width="24" />
            <a href="/froydnj">froydnj</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@ayg" height="24" src="https://avatars0.githubusercontent.com/u/940446?v=3&amp;s=48" width="24" />
            <a href="/ayg">ayg</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@saneyuki" height="24" src="https://avatars1.githubusercontent.com/u/180104?v=3&amp;s=48" width="24" />
            <a href="/saneyuki">saneyuki</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@rvandermeulen" height="24" src="https://avatars2.githubusercontent.com/u/3661247?v=3&amp;s=48" width="24" />
            <a href="/rvandermeulen">rvandermeulen</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@bluemarvin" height="24" src="https://avatars3.githubusercontent.com/u/3066?v=3&amp;s=48" width="24" />
            <a href="/bluemarvin">bluemarvin</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@ornew" height="24" src="https://avatars0.githubusercontent.com/u/19766770?v=3&amp;s=48" width="24" />
            <a href="/ornew">ornew</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@dzbarsky" height="24" src="https://avatars3.githubusercontent.com/u/1565842?v=3&amp;s=48" width="24" />
            <a href="/dzbarsky">dzbarsky</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@amccreight" height="24" src="https://avatars1.githubusercontent.com/u/841072?v=3&amp;s=48" width="24" />
            <a href="/amccreight">amccreight</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@poiru" height="24" src="https://avatars2.githubusercontent.com/u/1319028?v=3&amp;s=48" width="24" />
            <a href="/poiru">poiru</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@bill-mccloskey" height="24" src="https://avatars1.githubusercontent.com/u/6353756?v=3&amp;s=48" width="24" />
            <a href="/bill-mccloskey">bill-mccloskey</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@aidin36" height="24" src="https://avatars2.githubusercontent.com/u/3810651?v=3&amp;s=48" width="24" />
            <a href="/aidin36">aidin36</a>
          </li>
      </ul>
    </div>
  </div>

<div class="file">
  <div class="file-header">
  <div class="file-actions">

    <div class="BtnGroup">
      <a href="/mozilla/gecko-dev/raw/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp" class="btn btn-sm BtnGroup-item" id="raw-url">Raw</a>
        <a href="/mozilla/gecko-dev/blame/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp" class="btn btn-sm js-update-url-with-hash BtnGroup-item" data-hotkey="b">Blame</a>
      <a href="/mozilla/gecko-dev/commits/d61e0b9cedfc1b603afac8364c236da4d5eec145/dom/events/UIEvent.cpp" class="btn btn-sm BtnGroup-item" rel="nofollow">History</a>
    </div>

        <a class="btn-octicon tooltipped tooltipped-nw"
           aria-label="You must be on a branch to open this file in GitHub Desktop">
            <svg aria-hidden="true" class="octicon octicon-device-desktop" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M15 2H1c-.55 0-1 .45-1 1v9c0 .55.45 1 1 1h5.34c-.25.61-.86 1.39-2.34 2h8c-1.48-.61-2.09-1.39-2.34-2H15c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm0 9H1V3h14v8z"/></svg>
        </a>

        <button type="button" class="btn-octicon disabled tooltipped tooltipped-nw"
          aria-label="You must be on a branch to make or propose changes to this file">
          <svg aria-hidden="true" class="octicon octicon-pencil" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M0 12v3h3l8-8-3-3-8 8zm3 2H1v-2h1v1h1v1zm10.3-9.3L12 6 9 3l1.3-1.3a.996.996 0 0 1 1.41 0l1.59 1.59c.39.39.39 1.02 0 1.41z"/></svg>
        </button>
        <button type="button" class="btn-octicon btn-octicon-danger disabled tooltipped tooltipped-nw"
          aria-label="You must be on a branch to make or propose changes to this file">
          <svg aria-hidden="true" class="octicon octicon-trashcan" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M11 2H9c0-.55-.45-1-1-1H5c-.55 0-1 .45-1 1H2c-.55 0-1 .45-1 1v1c0 .55.45 1 1 1v9c0 .55.45 1 1 1h7c.55 0 1-.45 1-1V5c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm-1 12H3V5h1v8h1V5h1v8h1V5h1v8h1V5h1v9zm1-10H2V3h9v1z"/></svg>
        </button>
  </div>

  <div class="file-info">
      499 lines (434 sloc)
      <span class="file-info-divider"></span>
    13.3 KB
  </div>
</div>

  

  <div itemprop="text" class="blob-wrapper data type-c">
      <table class="highlight tab-size js-file-line-container" data-tab-size="8">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> vim: set ts=8 sts=2 et sw=2 tw=80: <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> This Source Code Form is subject to the terms of the Mozilla Public</span></td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * License, v. 2.0. If a copy of the MPL was not distributed with this</span></td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * file, You can obtain one at http://mozilla.org/MPL/2.0/. <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>base/basictypes.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>ipc/IPCMessageUtils.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>mozilla/dom/UIEvent.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>mozilla/ArrayUtils.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>mozilla/Assertions.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>mozilla/ContentEvents.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>mozilla/EventStateManager.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>mozilla/TextEvents.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>nsCOMPtr.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>nsContentUtils.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>nsIContent.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>nsIInterfaceRequestorUtils.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>nsIDocShell.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>nsIDOMWindow.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>nsIDOMNode.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>nsIFrame.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>prtime.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code blob-code-inner js-file-line"><span class="pl-k">namespace</span> <span class="pl-en">mozilla</span> {</td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code blob-code-inner js-file-line"><span class="pl-k">namespace</span> <span class="pl-en">dom</span> {</td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::UIEvent</span>(EventTarget* aOwner,</td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code blob-code-inner js-file-line">                 nsPresContext* aPresContext,</td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code blob-code-inner js-file-line">                 WidgetGUIEvent* aEvent)</td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code blob-code-inner js-file-line">  : Event(aOwner, aPresContext,</td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code blob-code-inner js-file-line">          aEvent ? aEvent : <span class="pl-k">new</span> InternalUIEvent(<span class="pl-c1">false</span>, eVoidEvent, <span class="pl-c1">nullptr</span>))</td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code blob-code-inner js-file-line">  , <span class="pl-smi">mClientPoint</span>(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code blob-code-inner js-file-line">  , <span class="pl-smi">mLayerPoint</span>(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code blob-code-inner js-file-line">  , <span class="pl-smi">mPagePoint</span>(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code blob-code-inner js-file-line">  , <span class="pl-smi">mMovementPoint</span>(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code blob-code-inner js-file-line">  , <span class="pl-smi">mIsPointerLocked</span>(EventStateManager::<span class="pl-smi">sIsPointerLocked</span>)</td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code blob-code-inner js-file-line">  , <span class="pl-smi">mLastClientPoint</span>(EventStateManager::<span class="pl-smi">sLastClientPoint</span>)</td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (aEvent) {</td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code blob-code-inner js-file-line">    <span class="pl-smi">mEventIsInternal</span> = <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="LC43" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="LC44" class="blob-code blob-code-inner js-file-line">    <span class="pl-smi">mEventIsInternal</span> = <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="LC45" class="blob-code blob-code-inner js-file-line">    <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mTime</span> = <span class="pl-c1">PR_Now</span>();</td>
      </tr>
      <tr>
        <td id="L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="LC46" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="LC47" class="blob-code blob-code-inner js-file-line">  </td>
      </tr>
      <tr>
        <td id="L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="LC48" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">//</span> Fill mDetail and mView according to the mEvent (widget-generated</span></td>
      </tr>
      <tr>
        <td id="L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="LC49" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">//</span> event) we&#39;ve got</span></td>
      </tr>
      <tr>
        <td id="L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="LC50" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">switch</span>(<span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mClass</span>) {</td>
      </tr>
      <tr>
        <td id="L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="LC51" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> eUIEventClass:</td>
      </tr>
      <tr>
        <td id="L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="LC52" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="LC53" class="blob-code blob-code-inner js-file-line">      <span class="pl-smi">mDetail</span> = <span class="pl-smi">mEvent</span>-&gt;<span class="pl-c1">AsUIEvent</span>()-&gt;<span class="pl-smi">mDetail</span>;</td>
      </tr>
      <tr>
        <td id="L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="LC54" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="LC55" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="LC56" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="LC57" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> eScrollPortEventClass:</td>
      </tr>
      <tr>
        <td id="L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="LC58" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="LC59" class="blob-code blob-code-inner js-file-line">      InternalScrollPortEvent* scrollEvent = <span class="pl-smi">mEvent</span>-&gt;<span class="pl-c1">AsScrollPortEvent</span>();</td>
      </tr>
      <tr>
        <td id="L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="LC60" class="blob-code blob-code-inner js-file-line">      <span class="pl-smi">mDetail</span> = <span class="pl-k">static_cast</span>&lt;<span class="pl-c1">int32_t</span>&gt;(scrollEvent-&gt;<span class="pl-smi">mOrient</span>);</td>
      </tr>
      <tr>
        <td id="L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="LC61" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="LC62" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="LC63" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="LC64" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="L65" class="blob-num js-line-number" data-line-number="65"></td>
        <td id="LC65" class="blob-code blob-code-inner js-file-line">      <span class="pl-smi">mDetail</span> = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L66" class="blob-num js-line-number" data-line-number="66"></td>
        <td id="LC66" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L67" class="blob-num js-line-number" data-line-number="67"></td>
        <td id="LC67" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L68" class="blob-num js-line-number" data-line-number="68"></td>
        <td id="LC68" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L69" class="blob-num js-line-number" data-line-number="69"></td>
        <td id="LC69" class="blob-code blob-code-inner js-file-line">  <span class="pl-smi">mView</span> = <span class="pl-c1">nullptr</span>;</td>
      </tr>
      <tr>
        <td id="L70" class="blob-num js-line-number" data-line-number="70"></td>
        <td id="LC70" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (<span class="pl-smi">mPresContext</span>)</td>
      </tr>
      <tr>
        <td id="L71" class="blob-num js-line-number" data-line-number="71"></td>
        <td id="LC71" class="blob-code blob-code-inner js-file-line">  {</td>
      </tr>
      <tr>
        <td id="L72" class="blob-num js-line-number" data-line-number="72"></td>
        <td id="LC72" class="blob-code blob-code-inner js-file-line">    nsIDocShell* docShell = <span class="pl-smi">mPresContext</span>-&gt;<span class="pl-c1">GetDocShell</span>();</td>
      </tr>
      <tr>
        <td id="L73" class="blob-num js-line-number" data-line-number="73"></td>
        <td id="LC73" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (docShell)</td>
      </tr>
      <tr>
        <td id="L74" class="blob-num js-line-number" data-line-number="74"></td>
        <td id="LC74" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L75" class="blob-num js-line-number" data-line-number="75"></td>
        <td id="LC75" class="blob-code blob-code-inner js-file-line">       <span class="pl-smi">mView</span> = docShell-&gt;<span class="pl-c1">GetWindow</span>();</td>
      </tr>
      <tr>
        <td id="L76" class="blob-num js-line-number" data-line-number="76"></td>
        <td id="LC76" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L77" class="blob-num js-line-number" data-line-number="77"></td>
        <td id="LC77" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L78" class="blob-num js-line-number" data-line-number="78"></td>
        <td id="LC78" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L79" class="blob-num js-line-number" data-line-number="79"></td>
        <td id="LC79" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L80" class="blob-num js-line-number" data-line-number="80"></td>
        <td id="LC80" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> static</span></td>
      </tr>
      <tr>
        <td id="L81" class="blob-num js-line-number" data-line-number="81"></td>
        <td id="LC81" class="blob-code blob-code-inner js-file-line">already_AddRefed&lt;UIEvent&gt;</td>
      </tr>
      <tr>
        <td id="L82" class="blob-num js-line-number" data-line-number="82"></td>
        <td id="LC82" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::Constructor</span>(<span class="pl-k">const</span> GlobalObject&amp; aGlobal,</td>
      </tr>
      <tr>
        <td id="L83" class="blob-num js-line-number" data-line-number="83"></td>
        <td id="LC83" class="blob-code blob-code-inner js-file-line">                     <span class="pl-k">const</span> nsAString&amp; aType,</td>
      </tr>
      <tr>
        <td id="L84" class="blob-num js-line-number" data-line-number="84"></td>
        <td id="LC84" class="blob-code blob-code-inner js-file-line">                     <span class="pl-k">const</span> UIEventInit&amp; aParam,</td>
      </tr>
      <tr>
        <td id="L85" class="blob-num js-line-number" data-line-number="85"></td>
        <td id="LC85" class="blob-code blob-code-inner js-file-line">                     ErrorResult&amp; aRv)</td>
      </tr>
      <tr>
        <td id="L86" class="blob-num js-line-number" data-line-number="86"></td>
        <td id="LC86" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L87" class="blob-num js-line-number" data-line-number="87"></td>
        <td id="LC87" class="blob-code blob-code-inner js-file-line">  nsCOMPtr&lt;EventTarget&gt; t = <span class="pl-c1">do_QueryInterface</span>(aGlobal.<span class="pl-c1">GetAsSupports</span>());</td>
      </tr>
      <tr>
        <td id="L88" class="blob-num js-line-number" data-line-number="88"></td>
        <td id="LC88" class="blob-code blob-code-inner js-file-line">  RefPtr&lt;UIEvent&gt; e = <span class="pl-k">new</span> <span class="pl-c1">UIEvent</span>(t, <span class="pl-c1">nullptr</span>, <span class="pl-c1">nullptr</span>);</td>
      </tr>
      <tr>
        <td id="L89" class="blob-num js-line-number" data-line-number="89"></td>
        <td id="LC89" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">bool</span> trusted = e-&gt;<span class="pl-c1">Init</span>(t);</td>
      </tr>
      <tr>
        <td id="L90" class="blob-num js-line-number" data-line-number="90"></td>
        <td id="LC90" class="blob-code blob-code-inner js-file-line">  e-&gt;<span class="pl-c1">InitUIEvent</span>(aType, aParam.<span class="pl-smi">mBubbles</span>, aParam.<span class="pl-smi">mCancelable</span>, aParam.<span class="pl-smi">mView</span>,</td>
      </tr>
      <tr>
        <td id="L91" class="blob-num js-line-number" data-line-number="91"></td>
        <td id="LC91" class="blob-code blob-code-inner js-file-line">                 aParam.<span class="pl-smi">mDetail</span>);</td>
      </tr>
      <tr>
        <td id="L92" class="blob-num js-line-number" data-line-number="92"></td>
        <td id="LC92" class="blob-code blob-code-inner js-file-line">  e-&gt;<span class="pl-c1">SetTrusted</span>(trusted);</td>
      </tr>
      <tr>
        <td id="L93" class="blob-num js-line-number" data-line-number="93"></td>
        <td id="LC93" class="blob-code blob-code-inner js-file-line">  e-&gt;<span class="pl-c1">SetComposed</span>(aParam.<span class="pl-smi">mComposed</span>);</td>
      </tr>
      <tr>
        <td id="L94" class="blob-num js-line-number" data-line-number="94"></td>
        <td id="LC94" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> e.<span class="pl-c1">forget</span>();</td>
      </tr>
      <tr>
        <td id="L95" class="blob-num js-line-number" data-line-number="95"></td>
        <td id="LC95" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L96" class="blob-num js-line-number" data-line-number="96"></td>
        <td id="LC96" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L97" class="blob-num js-line-number" data-line-number="97"></td>
        <td id="LC97" class="blob-code blob-code-inner js-file-line"><span class="pl-en">NS_IMPL_CYCLE_COLLECTION_INHERITED</span>(UIEvent, Event,</td>
      </tr>
      <tr>
        <td id="L98" class="blob-num js-line-number" data-line-number="98"></td>
        <td id="LC98" class="blob-code blob-code-inner js-file-line">                                   <span class="pl-smi">mView</span>)</td>
      </tr>
      <tr>
        <td id="L99" class="blob-num js-line-number" data-line-number="99"></td>
        <td id="LC99" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L100" class="blob-num js-line-number" data-line-number="100"></td>
        <td id="LC100" class="blob-code blob-code-inner js-file-line"><span class="pl-en">NS_IMPL_ADDREF_INHERITED</span>(UIEvent, Event)</td>
      </tr>
      <tr>
        <td id="L101" class="blob-num js-line-number" data-line-number="101"></td>
        <td id="LC101" class="blob-code blob-code-inner js-file-line"><span class="pl-en">NS_IMPL_RELEASE_INHERITED</span>(UIEvent, Event)</td>
      </tr>
      <tr>
        <td id="L102" class="blob-num js-line-number" data-line-number="102"></td>
        <td id="LC102" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L103" class="blob-num js-line-number" data-line-number="103"></td>
        <td id="LC103" class="blob-code blob-code-inner js-file-line"><span class="pl-en">NS_INTERFACE_MAP_BEGIN_CYCLE_COLLECTION_INHERITED</span>(UIEvent)</td>
      </tr>
      <tr>
        <td id="L104" class="blob-num js-line-number" data-line-number="104"></td>
        <td id="LC104" class="blob-code blob-code-inner js-file-line">  <span class="pl-en">NS_INTERFACE_MAP_ENTRY</span>(nsIDOMUIEvent)</td>
      </tr>
      <tr>
        <td id="L105" class="blob-num js-line-number" data-line-number="105"></td>
        <td id="LC105" class="blob-code blob-code-inner js-file-line"><span class="pl-en">NS_INTERFACE_MAP_END_INHERITING</span>(Event)</td>
      </tr>
      <tr>
        <td id="L106" class="blob-num js-line-number" data-line-number="106"></td>
        <td id="LC106" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L107" class="blob-num js-line-number" data-line-number="107"></td>
        <td id="LC107" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> nsIntPoint</td>
      </tr>
      <tr>
        <td id="L108" class="blob-num js-line-number" data-line-number="108"></td>
        <td id="LC108" class="blob-code blob-code-inner js-file-line"><span class="pl-en">DevPixelsToCSSPixels</span>(<span class="pl-k">const</span> LayoutDeviceIntPoint&amp; aPoint,</td>
      </tr>
      <tr>
        <td id="L109" class="blob-num js-line-number" data-line-number="109"></td>
        <td id="LC109" class="blob-code blob-code-inner js-file-line">                     nsPresContext* aContext)</td>
      </tr>
      <tr>
        <td id="L110" class="blob-num js-line-number" data-line-number="110"></td>
        <td id="LC110" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L111" class="blob-num js-line-number" data-line-number="111"></td>
        <td id="LC111" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> <span class="pl-c1">nsIntPoint</span>(aContext-&gt;<span class="pl-c1">DevPixelsToIntCSSPixels</span>(aPoint.<span class="pl-smi">x</span>),</td>
      </tr>
      <tr>
        <td id="L112" class="blob-num js-line-number" data-line-number="112"></td>
        <td id="LC112" class="blob-code blob-code-inner js-file-line">                    aContext-&gt;<span class="pl-c1">DevPixelsToIntCSSPixels</span>(aPoint.<span class="pl-smi">y</span>));</td>
      </tr>
      <tr>
        <td id="L113" class="blob-num js-line-number" data-line-number="113"></td>
        <td id="LC113" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L114" class="blob-num js-line-number" data-line-number="114"></td>
        <td id="LC114" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L115" class="blob-num js-line-number" data-line-number="115"></td>
        <td id="LC115" class="blob-code blob-code-inner js-file-line">nsIntPoint</td>
      </tr>
      <tr>
        <td id="L116" class="blob-num js-line-number" data-line-number="116"></td>
        <td id="LC116" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::GetMovementPoint</span>()</td>
      </tr>
      <tr>
        <td id="L117" class="blob-num js-line-number" data-line-number="117"></td>
        <td id="LC117" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L118" class="blob-num js-line-number" data-line-number="118"></td>
        <td id="LC118" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (<span class="pl-smi">mPrivateDataDuplicated</span> || <span class="pl-smi">mEventIsInternal</span>) {</td>
      </tr>
      <tr>
        <td id="L119" class="blob-num js-line-number" data-line-number="119"></td>
        <td id="LC119" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-smi">mMovementPoint</span>;</td>
      </tr>
      <tr>
        <td id="L120" class="blob-num js-line-number" data-line-number="120"></td>
        <td id="LC120" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L121" class="blob-num js-line-number" data-line-number="121"></td>
        <td id="LC121" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L122" class="blob-num js-line-number" data-line-number="122"></td>
        <td id="LC122" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (!<span class="pl-smi">mEvent</span> ||</td>
      </tr>
      <tr>
        <td id="L123" class="blob-num js-line-number" data-line-number="123"></td>
        <td id="LC123" class="blob-code blob-code-inner js-file-line">      (<span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mClass</span> != eMouseEventClass &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L124" class="blob-num js-line-number" data-line-number="124"></td>
        <td id="LC124" class="blob-code blob-code-inner js-file-line">       <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mClass</span> != eMouseScrollEventClass &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L125" class="blob-num js-line-number" data-line-number="125"></td>
        <td id="LC125" class="blob-code blob-code-inner js-file-line">       <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mClass</span> != eWheelEventClass &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L126" class="blob-num js-line-number" data-line-number="126"></td>
        <td id="LC126" class="blob-code blob-code-inner js-file-line">       <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mClass</span> != eDragEventClass &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L127" class="blob-num js-line-number" data-line-number="127"></td>
        <td id="LC127" class="blob-code blob-code-inner js-file-line">       <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mClass</span> != ePointerEventClass &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L128" class="blob-num js-line-number" data-line-number="128"></td>
        <td id="LC128" class="blob-code blob-code-inner js-file-line">       <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mClass</span> != eSimpleGestureEventClass) ||</td>
      </tr>
      <tr>
        <td id="L129" class="blob-num js-line-number" data-line-number="129"></td>
        <td id="LC129" class="blob-code blob-code-inner js-file-line">       !<span class="pl-smi">mEvent</span>-&gt;<span class="pl-c1">AsGUIEvent</span>()-&gt;<span class="pl-smi">mWidget</span>) {</td>
      </tr>
      <tr>
        <td id="L130" class="blob-num js-line-number" data-line-number="130"></td>
        <td id="LC130" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">nsIntPoint</span>(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L131" class="blob-num js-line-number" data-line-number="131"></td>
        <td id="LC131" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L132" class="blob-num js-line-number" data-line-number="132"></td>
        <td id="LC132" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L133" class="blob-num js-line-number" data-line-number="133"></td>
        <td id="LC133" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">//</span> Calculate the delta between the last screen point and the current one.</span></td>
      </tr>
      <tr>
        <td id="L134" class="blob-num js-line-number" data-line-number="134"></td>
        <td id="LC134" class="blob-code blob-code-inner js-file-line">  nsIntPoint current = <span class="pl-c1">DevPixelsToCSSPixels</span>(<span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mRefPoint</span>, <span class="pl-smi">mPresContext</span>);</td>
      </tr>
      <tr>
        <td id="L135" class="blob-num js-line-number" data-line-number="135"></td>
        <td id="LC135" class="blob-code blob-code-inner js-file-line">  nsIntPoint last = <span class="pl-c1">DevPixelsToCSSPixels</span>(<span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mLastRefPoint</span>, <span class="pl-smi">mPresContext</span>);</td>
      </tr>
      <tr>
        <td id="L136" class="blob-num js-line-number" data-line-number="136"></td>
        <td id="LC136" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> current - last;</td>
      </tr>
      <tr>
        <td id="L137" class="blob-num js-line-number" data-line-number="137"></td>
        <td id="LC137" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L138" class="blob-num js-line-number" data-line-number="138"></td>
        <td id="LC138" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L139" class="blob-num js-line-number" data-line-number="139"></td>
        <td id="LC139" class="blob-code blob-code-inner js-file-line">NS_IMETHODIMP</td>
      </tr>
      <tr>
        <td id="L140" class="blob-num js-line-number" data-line-number="140"></td>
        <td id="LC140" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::GetView</span>(mozIDOMWindowProxy** aView)</td>
      </tr>
      <tr>
        <td id="L141" class="blob-num js-line-number" data-line-number="141"></td>
        <td id="LC141" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L142" class="blob-num js-line-number" data-line-number="142"></td>
        <td id="LC142" class="blob-code blob-code-inner js-file-line">  *aView = <span class="pl-smi">mView</span>;</td>
      </tr>
      <tr>
        <td id="L143" class="blob-num js-line-number" data-line-number="143"></td>
        <td id="LC143" class="blob-code blob-code-inner js-file-line">  <span class="pl-en">NS_IF_ADDREF</span>(*aView);</td>
      </tr>
      <tr>
        <td id="L144" class="blob-num js-line-number" data-line-number="144"></td>
        <td id="LC144" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> NS_OK;</td>
      </tr>
      <tr>
        <td id="L145" class="blob-num js-line-number" data-line-number="145"></td>
        <td id="LC145" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L146" class="blob-num js-line-number" data-line-number="146"></td>
        <td id="LC146" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L147" class="blob-num js-line-number" data-line-number="147"></td>
        <td id="LC147" class="blob-code blob-code-inner js-file-line">NS_IMETHODIMP</td>
      </tr>
      <tr>
        <td id="L148" class="blob-num js-line-number" data-line-number="148"></td>
        <td id="LC148" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::GetDetail</span>(<span class="pl-c1">int32_t</span>* aDetail)</td>
      </tr>
      <tr>
        <td id="L149" class="blob-num js-line-number" data-line-number="149"></td>
        <td id="LC149" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L150" class="blob-num js-line-number" data-line-number="150"></td>
        <td id="LC150" class="blob-code blob-code-inner js-file-line">  *aDetail = <span class="pl-smi">mDetail</span>;</td>
      </tr>
      <tr>
        <td id="L151" class="blob-num js-line-number" data-line-number="151"></td>
        <td id="LC151" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> NS_OK;</td>
      </tr>
      <tr>
        <td id="L152" class="blob-num js-line-number" data-line-number="152"></td>
        <td id="LC152" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L153" class="blob-num js-line-number" data-line-number="153"></td>
        <td id="LC153" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L154" class="blob-num js-line-number" data-line-number="154"></td>
        <td id="LC154" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L155" class="blob-num js-line-number" data-line-number="155"></td>
        <td id="LC155" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::InitUIEvent</span>(<span class="pl-k">const</span> nsAString&amp; typeArg,</td>
      </tr>
      <tr>
        <td id="L156" class="blob-num js-line-number" data-line-number="156"></td>
        <td id="LC156" class="blob-code blob-code-inner js-file-line">                     <span class="pl-k">bool</span> canBubbleArg,</td>
      </tr>
      <tr>
        <td id="L157" class="blob-num js-line-number" data-line-number="157"></td>
        <td id="LC157" class="blob-code blob-code-inner js-file-line">                     <span class="pl-k">bool</span> cancelableArg,</td>
      </tr>
      <tr>
        <td id="L158" class="blob-num js-line-number" data-line-number="158"></td>
        <td id="LC158" class="blob-code blob-code-inner js-file-line">                     nsGlobalWindow* viewArg,</td>
      </tr>
      <tr>
        <td id="L159" class="blob-num js-line-number" data-line-number="159"></td>
        <td id="LC159" class="blob-code blob-code-inner js-file-line">                     <span class="pl-c1">int32_t</span> detailArg)</td>
      </tr>
      <tr>
        <td id="L160" class="blob-num js-line-number" data-line-number="160"></td>
        <td id="LC160" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L161" class="blob-num js-line-number" data-line-number="161"></td>
        <td id="LC161" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">auto</span>* view = viewArg ? viewArg-&gt;<span class="pl-c1">AsInner</span>() : <span class="pl-c1">nullptr</span>;</td>
      </tr>
      <tr>
        <td id="L162" class="blob-num js-line-number" data-line-number="162"></td>
        <td id="LC162" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">InitUIEvent</span>(typeArg, canBubbleArg, cancelableArg, view, detailArg);</td>
      </tr>
      <tr>
        <td id="L163" class="blob-num js-line-number" data-line-number="163"></td>
        <td id="LC163" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L164" class="blob-num js-line-number" data-line-number="164"></td>
        <td id="LC164" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L165" class="blob-num js-line-number" data-line-number="165"></td>
        <td id="LC165" class="blob-code blob-code-inner js-file-line">NS_IMETHODIMP</td>
      </tr>
      <tr>
        <td id="L166" class="blob-num js-line-number" data-line-number="166"></td>
        <td id="LC166" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::InitUIEvent</span>(<span class="pl-k">const</span> nsAString&amp; typeArg,</td>
      </tr>
      <tr>
        <td id="L167" class="blob-num js-line-number" data-line-number="167"></td>
        <td id="LC167" class="blob-code blob-code-inner js-file-line">                     <span class="pl-k">bool</span> canBubbleArg,</td>
      </tr>
      <tr>
        <td id="L168" class="blob-num js-line-number" data-line-number="168"></td>
        <td id="LC168" class="blob-code blob-code-inner js-file-line">                     <span class="pl-k">bool</span> cancelableArg,</td>
      </tr>
      <tr>
        <td id="L169" class="blob-num js-line-number" data-line-number="169"></td>
        <td id="LC169" class="blob-code blob-code-inner js-file-line">                     mozIDOMWindow* viewArg,</td>
      </tr>
      <tr>
        <td id="L170" class="blob-num js-line-number" data-line-number="170"></td>
        <td id="LC170" class="blob-code blob-code-inner js-file-line">                     <span class="pl-c1">int32_t</span> detailArg)</td>
      </tr>
      <tr>
        <td id="L171" class="blob-num js-line-number" data-line-number="171"></td>
        <td id="LC171" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L172" class="blob-num js-line-number" data-line-number="172"></td>
        <td id="LC172" class="blob-code blob-code-inner js-file-line">  <span class="pl-en">NS_ENSURE_TRUE</span>(!<span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mFlags</span>.<span class="pl-smi">mIsBeingDispatched</span>, NS_OK);</td>
      </tr>
      <tr>
        <td id="L173" class="blob-num js-line-number" data-line-number="173"></td>
        <td id="LC173" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L174" class="blob-num js-line-number" data-line-number="174"></td>
        <td id="LC174" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">Event::InitEvent</span>(typeArg, canBubbleArg, cancelableArg);</td>
      </tr>
      <tr>
        <td id="L175" class="blob-num js-line-number" data-line-number="175"></td>
        <td id="LC175" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L176" class="blob-num js-line-number" data-line-number="176"></td>
        <td id="LC176" class="blob-code blob-code-inner js-file-line">  <span class="pl-smi">mDetail</span> = detailArg;</td>
      </tr>
      <tr>
        <td id="L177" class="blob-num js-line-number" data-line-number="177"></td>
        <td id="LC177" class="blob-code blob-code-inner js-file-line">  <span class="pl-smi">mView</span> = viewArg ? <span class="pl-c1">nsPIDOMWindowInner::From</span>(viewArg)-&gt;<span class="pl-c1">GetOuterWindow</span>() :</td>
      </tr>
      <tr>
        <td id="L178" class="blob-num js-line-number" data-line-number="178"></td>
        <td id="LC178" class="blob-code blob-code-inner js-file-line">                    <span class="pl-c1">nullptr</span>;</td>
      </tr>
      <tr>
        <td id="L179" class="blob-num js-line-number" data-line-number="179"></td>
        <td id="LC179" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L180" class="blob-num js-line-number" data-line-number="180"></td>
        <td id="LC180" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> NS_OK;</td>
      </tr>
      <tr>
        <td id="L181" class="blob-num js-line-number" data-line-number="181"></td>
        <td id="LC181" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L182" class="blob-num js-line-number" data-line-number="182"></td>
        <td id="LC182" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L183" class="blob-num js-line-number" data-line-number="183"></td>
        <td id="LC183" class="blob-code blob-code-inner js-file-line">NS_IMETHODIMP</td>
      </tr>
      <tr>
        <td id="L184" class="blob-num js-line-number" data-line-number="184"></td>
        <td id="LC184" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::GetPageX</span>(<span class="pl-c1">int32_t</span>* aPageX)</td>
      </tr>
      <tr>
        <td id="L185" class="blob-num js-line-number" data-line-number="185"></td>
        <td id="LC185" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L186" class="blob-num js-line-number" data-line-number="186"></td>
        <td id="LC186" class="blob-code blob-code-inner js-file-line">  <span class="pl-en">NS_ENSURE_ARG_POINTER</span>(aPageX);</td>
      </tr>
      <tr>
        <td id="L187" class="blob-num js-line-number" data-line-number="187"></td>
        <td id="LC187" class="blob-code blob-code-inner js-file-line">  *aPageX = <span class="pl-c1">PageX</span>();</td>
      </tr>
      <tr>
        <td id="L188" class="blob-num js-line-number" data-line-number="188"></td>
        <td id="LC188" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> NS_OK;</td>
      </tr>
      <tr>
        <td id="L189" class="blob-num js-line-number" data-line-number="189"></td>
        <td id="LC189" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L190" class="blob-num js-line-number" data-line-number="190"></td>
        <td id="LC190" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L191" class="blob-num js-line-number" data-line-number="191"></td>
        <td id="LC191" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">int32_t</span></td>
      </tr>
      <tr>
        <td id="L192" class="blob-num js-line-number" data-line-number="192"></td>
        <td id="LC192" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::PageX</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L193" class="blob-num js-line-number" data-line-number="193"></td>
        <td id="LC193" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L194" class="blob-num js-line-number" data-line-number="194"></td>
        <td id="LC194" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (<span class="pl-smi">mPrivateDataDuplicated</span>) {</td>
      </tr>
      <tr>
        <td id="L195" class="blob-num js-line-number" data-line-number="195"></td>
        <td id="LC195" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-smi">mPagePoint</span>.<span class="pl-smi">x</span>;</td>
      </tr>
      <tr>
        <td id="L196" class="blob-num js-line-number" data-line-number="196"></td>
        <td id="LC196" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L197" class="blob-num js-line-number" data-line-number="197"></td>
        <td id="LC197" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L198" class="blob-num js-line-number" data-line-number="198"></td>
        <td id="LC198" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> <span class="pl-c1">Event::GetPageCoords</span>(<span class="pl-smi">mPresContext</span>, <span class="pl-smi">mEvent</span>, <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mRefPoint</span>,</td>
      </tr>
      <tr>
        <td id="L199" class="blob-num js-line-number" data-line-number="199"></td>
        <td id="LC199" class="blob-code blob-code-inner js-file-line">                              <span class="pl-smi">mClientPoint</span>).<span class="pl-smi">x</span>;</td>
      </tr>
      <tr>
        <td id="L200" class="blob-num js-line-number" data-line-number="200"></td>
        <td id="LC200" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L201" class="blob-num js-line-number" data-line-number="201"></td>
        <td id="LC201" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L202" class="blob-num js-line-number" data-line-number="202"></td>
        <td id="LC202" class="blob-code blob-code-inner js-file-line">NS_IMETHODIMP</td>
      </tr>
      <tr>
        <td id="L203" class="blob-num js-line-number" data-line-number="203"></td>
        <td id="LC203" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::GetPageY</span>(<span class="pl-c1">int32_t</span>* aPageY)</td>
      </tr>
      <tr>
        <td id="L204" class="blob-num js-line-number" data-line-number="204"></td>
        <td id="LC204" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L205" class="blob-num js-line-number" data-line-number="205"></td>
        <td id="LC205" class="blob-code blob-code-inner js-file-line">  <span class="pl-en">NS_ENSURE_ARG_POINTER</span>(aPageY);</td>
      </tr>
      <tr>
        <td id="L206" class="blob-num js-line-number" data-line-number="206"></td>
        <td id="LC206" class="blob-code blob-code-inner js-file-line">  *aPageY = <span class="pl-c1">PageY</span>();</td>
      </tr>
      <tr>
        <td id="L207" class="blob-num js-line-number" data-line-number="207"></td>
        <td id="LC207" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> NS_OK;</td>
      </tr>
      <tr>
        <td id="L208" class="blob-num js-line-number" data-line-number="208"></td>
        <td id="LC208" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L209" class="blob-num js-line-number" data-line-number="209"></td>
        <td id="LC209" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L210" class="blob-num js-line-number" data-line-number="210"></td>
        <td id="LC210" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">int32_t</span></td>
      </tr>
      <tr>
        <td id="L211" class="blob-num js-line-number" data-line-number="211"></td>
        <td id="LC211" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::PageY</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L212" class="blob-num js-line-number" data-line-number="212"></td>
        <td id="LC212" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L213" class="blob-num js-line-number" data-line-number="213"></td>
        <td id="LC213" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (<span class="pl-smi">mPrivateDataDuplicated</span>) {</td>
      </tr>
      <tr>
        <td id="L214" class="blob-num js-line-number" data-line-number="214"></td>
        <td id="LC214" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-smi">mPagePoint</span>.<span class="pl-smi">y</span>;</td>
      </tr>
      <tr>
        <td id="L215" class="blob-num js-line-number" data-line-number="215"></td>
        <td id="LC215" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L216" class="blob-num js-line-number" data-line-number="216"></td>
        <td id="LC216" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L217" class="blob-num js-line-number" data-line-number="217"></td>
        <td id="LC217" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> <span class="pl-c1">Event::GetPageCoords</span>(<span class="pl-smi">mPresContext</span>, <span class="pl-smi">mEvent</span>, <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mRefPoint</span>,</td>
      </tr>
      <tr>
        <td id="L218" class="blob-num js-line-number" data-line-number="218"></td>
        <td id="LC218" class="blob-code blob-code-inner js-file-line">                              <span class="pl-smi">mClientPoint</span>).<span class="pl-smi">y</span>;</td>
      </tr>
      <tr>
        <td id="L219" class="blob-num js-line-number" data-line-number="219"></td>
        <td id="LC219" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L220" class="blob-num js-line-number" data-line-number="220"></td>
        <td id="LC220" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L221" class="blob-num js-line-number" data-line-number="221"></td>
        <td id="LC221" class="blob-code blob-code-inner js-file-line">NS_IMETHODIMP</td>
      </tr>
      <tr>
        <td id="L222" class="blob-num js-line-number" data-line-number="222"></td>
        <td id="LC222" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::GetWhich</span>(<span class="pl-c1">uint32_t</span>* aWhich)</td>
      </tr>
      <tr>
        <td id="L223" class="blob-num js-line-number" data-line-number="223"></td>
        <td id="LC223" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L224" class="blob-num js-line-number" data-line-number="224"></td>
        <td id="LC224" class="blob-code blob-code-inner js-file-line">  <span class="pl-en">NS_ENSURE_ARG_POINTER</span>(aWhich);</td>
      </tr>
      <tr>
        <td id="L225" class="blob-num js-line-number" data-line-number="225"></td>
        <td id="LC225" class="blob-code blob-code-inner js-file-line">  *aWhich = <span class="pl-c1">Which</span>();</td>
      </tr>
      <tr>
        <td id="L226" class="blob-num js-line-number" data-line-number="226"></td>
        <td id="LC226" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> NS_OK;</td>
      </tr>
      <tr>
        <td id="L227" class="blob-num js-line-number" data-line-number="227"></td>
        <td id="LC227" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L228" class="blob-num js-line-number" data-line-number="228"></td>
        <td id="LC228" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L229" class="blob-num js-line-number" data-line-number="229"></td>
        <td id="LC229" class="blob-code blob-code-inner js-file-line">already_AddRefed&lt;nsINode&gt;</td>
      </tr>
      <tr>
        <td id="L230" class="blob-num js-line-number" data-line-number="230"></td>
        <td id="LC230" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::GetRangeParent</span>()</td>
      </tr>
      <tr>
        <td id="L231" class="blob-num js-line-number" data-line-number="231"></td>
        <td id="LC231" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L232" class="blob-num js-line-number" data-line-number="232"></td>
        <td id="LC232" class="blob-code blob-code-inner js-file-line">  nsIFrame* targetFrame = <span class="pl-c1">nullptr</span>;</td>
      </tr>
      <tr>
        <td id="L233" class="blob-num js-line-number" data-line-number="233"></td>
        <td id="LC233" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L234" class="blob-num js-line-number" data-line-number="234"></td>
        <td id="LC234" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (<span class="pl-smi">mPresContext</span>) {</td>
      </tr>
      <tr>
        <td id="L235" class="blob-num js-line-number" data-line-number="235"></td>
        <td id="LC235" class="blob-code blob-code-inner js-file-line">    targetFrame = <span class="pl-smi">mPresContext</span>-&gt;<span class="pl-c1">EventStateManager</span>()-&gt;<span class="pl-c1">GetEventTarget</span>();</td>
      </tr>
      <tr>
        <td id="L236" class="blob-num js-line-number" data-line-number="236"></td>
        <td id="LC236" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L237" class="blob-num js-line-number" data-line-number="237"></td>
        <td id="LC237" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L238" class="blob-num js-line-number" data-line-number="238"></td>
        <td id="LC238" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (targetFrame) {</td>
      </tr>
      <tr>
        <td id="L239" class="blob-num js-line-number" data-line-number="239"></td>
        <td id="LC239" class="blob-code blob-code-inner js-file-line">    nsPoint pt = <span class="pl-c1">nsLayoutUtils::GetEventCoordinatesRelativeTo</span>(<span class="pl-smi">mEvent</span>,</td>
      </tr>
      <tr>
        <td id="L240" class="blob-num js-line-number" data-line-number="240"></td>
        <td id="LC240" class="blob-code blob-code-inner js-file-line">                                                              targetFrame);</td>
      </tr>
      <tr>
        <td id="L241" class="blob-num js-line-number" data-line-number="241"></td>
        <td id="LC241" class="blob-code blob-code-inner js-file-line">    nsCOMPtr&lt;nsIContent&gt; parent = targetFrame-&gt;<span class="pl-c1">GetContentOffsetsFromPoint</span>(pt).<span class="pl-smi">content</span>;</td>
      </tr>
      <tr>
        <td id="L242" class="blob-num js-line-number" data-line-number="242"></td>
        <td id="LC242" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (parent) {</td>
      </tr>
      <tr>
        <td id="L243" class="blob-num js-line-number" data-line-number="243"></td>
        <td id="LC243" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (parent-&gt;<span class="pl-c1">ChromeOnlyAccess</span>() &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L244" class="blob-num js-line-number" data-line-number="244"></td>
        <td id="LC244" class="blob-code blob-code-inner js-file-line">          !<span class="pl-c1">nsContentUtils::CanAccessNativeAnon</span>()) {</td>
      </tr>
      <tr>
        <td id="L245" class="blob-num js-line-number" data-line-number="245"></td>
        <td id="LC245" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">nullptr</span>;</td>
      </tr>
      <tr>
        <td id="L246" class="blob-num js-line-number" data-line-number="246"></td>
        <td id="LC246" class="blob-code blob-code-inner js-file-line">      }</td>
      </tr>
      <tr>
        <td id="L247" class="blob-num js-line-number" data-line-number="247"></td>
        <td id="LC247" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">return</span> parent.<span class="pl-c1">forget</span>();</td>
      </tr>
      <tr>
        <td id="L248" class="blob-num js-line-number" data-line-number="248"></td>
        <td id="LC248" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L249" class="blob-num js-line-number" data-line-number="249"></td>
        <td id="LC249" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L250" class="blob-num js-line-number" data-line-number="250"></td>
        <td id="LC250" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L251" class="blob-num js-line-number" data-line-number="251"></td>
        <td id="LC251" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> <span class="pl-c1">nullptr</span>;</td>
      </tr>
      <tr>
        <td id="L252" class="blob-num js-line-number" data-line-number="252"></td>
        <td id="LC252" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L253" class="blob-num js-line-number" data-line-number="253"></td>
        <td id="LC253" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L254" class="blob-num js-line-number" data-line-number="254"></td>
        <td id="LC254" class="blob-code blob-code-inner js-file-line">NS_IMETHODIMP</td>
      </tr>
      <tr>
        <td id="L255" class="blob-num js-line-number" data-line-number="255"></td>
        <td id="LC255" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::GetRangeParent</span>(nsIDOMNode** aRangeParent)</td>
      </tr>
      <tr>
        <td id="L256" class="blob-num js-line-number" data-line-number="256"></td>
        <td id="LC256" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L257" class="blob-num js-line-number" data-line-number="257"></td>
        <td id="LC257" class="blob-code blob-code-inner js-file-line">  <span class="pl-en">NS_ENSURE_ARG_POINTER</span>(aRangeParent);</td>
      </tr>
      <tr>
        <td id="L258" class="blob-num js-line-number" data-line-number="258"></td>
        <td id="LC258" class="blob-code blob-code-inner js-file-line">  *aRangeParent = <span class="pl-c1">nullptr</span>;</td>
      </tr>
      <tr>
        <td id="L259" class="blob-num js-line-number" data-line-number="259"></td>
        <td id="LC259" class="blob-code blob-code-inner js-file-line">  nsCOMPtr&lt;nsINode&gt; n = <span class="pl-c1">GetRangeParent</span>();</td>
      </tr>
      <tr>
        <td id="L260" class="blob-num js-line-number" data-line-number="260"></td>
        <td id="LC260" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (n) {</td>
      </tr>
      <tr>
        <td id="L261" class="blob-num js-line-number" data-line-number="261"></td>
        <td id="LC261" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CallQueryInterface</span>(n, aRangeParent);</td>
      </tr>
      <tr>
        <td id="L262" class="blob-num js-line-number" data-line-number="262"></td>
        <td id="LC262" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L263" class="blob-num js-line-number" data-line-number="263"></td>
        <td id="LC263" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> NS_OK;</td>
      </tr>
      <tr>
        <td id="L264" class="blob-num js-line-number" data-line-number="264"></td>
        <td id="LC264" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L265" class="blob-num js-line-number" data-line-number="265"></td>
        <td id="LC265" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L266" class="blob-num js-line-number" data-line-number="266"></td>
        <td id="LC266" class="blob-code blob-code-inner js-file-line">NS_IMETHODIMP</td>
      </tr>
      <tr>
        <td id="L267" class="blob-num js-line-number" data-line-number="267"></td>
        <td id="LC267" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::GetRangeOffset</span>(<span class="pl-c1">int32_t</span>* aRangeOffset)</td>
      </tr>
      <tr>
        <td id="L268" class="blob-num js-line-number" data-line-number="268"></td>
        <td id="LC268" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L269" class="blob-num js-line-number" data-line-number="269"></td>
        <td id="LC269" class="blob-code blob-code-inner js-file-line">  <span class="pl-en">NS_ENSURE_ARG_POINTER</span>(aRangeOffset);</td>
      </tr>
      <tr>
        <td id="L270" class="blob-num js-line-number" data-line-number="270"></td>
        <td id="LC270" class="blob-code blob-code-inner js-file-line">  *aRangeOffset = <span class="pl-c1">RangeOffset</span>();</td>
      </tr>
      <tr>
        <td id="L271" class="blob-num js-line-number" data-line-number="271"></td>
        <td id="LC271" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> NS_OK;</td>
      </tr>
      <tr>
        <td id="L272" class="blob-num js-line-number" data-line-number="272"></td>
        <td id="LC272" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L273" class="blob-num js-line-number" data-line-number="273"></td>
        <td id="LC273" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L274" class="blob-num js-line-number" data-line-number="274"></td>
        <td id="LC274" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">int32_t</span></td>
      </tr>
      <tr>
        <td id="L275" class="blob-num js-line-number" data-line-number="275"></td>
        <td id="LC275" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::RangeOffset</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L276" class="blob-num js-line-number" data-line-number="276"></td>
        <td id="LC276" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L277" class="blob-num js-line-number" data-line-number="277"></td>
        <td id="LC277" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (!<span class="pl-smi">mPresContext</span>) {</td>
      </tr>
      <tr>
        <td id="L278" class="blob-num js-line-number" data-line-number="278"></td>
        <td id="LC278" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L279" class="blob-num js-line-number" data-line-number="279"></td>
        <td id="LC279" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L280" class="blob-num js-line-number" data-line-number="280"></td>
        <td id="LC280" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L281" class="blob-num js-line-number" data-line-number="281"></td>
        <td id="LC281" class="blob-code blob-code-inner js-file-line">  nsIFrame* targetFrame = <span class="pl-smi">mPresContext</span>-&gt;<span class="pl-c1">EventStateManager</span>()-&gt;<span class="pl-c1">GetEventTarget</span>();</td>
      </tr>
      <tr>
        <td id="L282" class="blob-num js-line-number" data-line-number="282"></td>
        <td id="LC282" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (!targetFrame) {</td>
      </tr>
      <tr>
        <td id="L283" class="blob-num js-line-number" data-line-number="283"></td>
        <td id="LC283" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L284" class="blob-num js-line-number" data-line-number="284"></td>
        <td id="LC284" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L285" class="blob-num js-line-number" data-line-number="285"></td>
        <td id="LC285" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L286" class="blob-num js-line-number" data-line-number="286"></td>
        <td id="LC286" class="blob-code blob-code-inner js-file-line">  nsPoint pt = <span class="pl-c1">nsLayoutUtils::GetEventCoordinatesRelativeTo</span>(<span class="pl-smi">mEvent</span>,</td>
      </tr>
      <tr>
        <td id="L287" class="blob-num js-line-number" data-line-number="287"></td>
        <td id="LC287" class="blob-code blob-code-inner js-file-line">                                                            targetFrame);</td>
      </tr>
      <tr>
        <td id="L288" class="blob-num js-line-number" data-line-number="288"></td>
        <td id="LC288" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> targetFrame-&gt;<span class="pl-c1">GetContentOffsetsFromPoint</span>(pt).<span class="pl-smi">offset</span>;</td>
      </tr>
      <tr>
        <td id="L289" class="blob-num js-line-number" data-line-number="289"></td>
        <td id="LC289" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L290" class="blob-num js-line-number" data-line-number="290"></td>
        <td id="LC290" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L291" class="blob-num js-line-number" data-line-number="291"></td>
        <td id="LC291" class="blob-code blob-code-inner js-file-line">nsIntPoint</td>
      </tr>
      <tr>
        <td id="L292" class="blob-num js-line-number" data-line-number="292"></td>
        <td id="LC292" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::GetLayerPoint</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L293" class="blob-num js-line-number" data-line-number="293"></td>
        <td id="LC293" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L294" class="blob-num js-line-number" data-line-number="294"></td>
        <td id="LC294" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (!<span class="pl-smi">mEvent</span> ||</td>
      </tr>
      <tr>
        <td id="L295" class="blob-num js-line-number" data-line-number="295"></td>
        <td id="LC295" class="blob-code blob-code-inner js-file-line">      (<span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mClass</span> != eMouseEventClass &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L296" class="blob-num js-line-number" data-line-number="296"></td>
        <td id="LC296" class="blob-code blob-code-inner js-file-line">       <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mClass</span> != eMouseScrollEventClass &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L297" class="blob-num js-line-number" data-line-number="297"></td>
        <td id="LC297" class="blob-code blob-code-inner js-file-line">       <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mClass</span> != eWheelEventClass &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L298" class="blob-num js-line-number" data-line-number="298"></td>
        <td id="LC298" class="blob-code blob-code-inner js-file-line">       <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mClass</span> != ePointerEventClass &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L299" class="blob-num js-line-number" data-line-number="299"></td>
        <td id="LC299" class="blob-code blob-code-inner js-file-line">       <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mClass</span> != eTouchEventClass &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L300" class="blob-num js-line-number" data-line-number="300"></td>
        <td id="LC300" class="blob-code blob-code-inner js-file-line">       <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mClass</span> != eDragEventClass &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L301" class="blob-num js-line-number" data-line-number="301"></td>
        <td id="LC301" class="blob-code blob-code-inner js-file-line">       <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mClass</span> != eSimpleGestureEventClass) ||</td>
      </tr>
      <tr>
        <td id="L302" class="blob-num js-line-number" data-line-number="302"></td>
        <td id="LC302" class="blob-code blob-code-inner js-file-line">      !<span class="pl-smi">mPresContext</span> ||</td>
      </tr>
      <tr>
        <td id="L303" class="blob-num js-line-number" data-line-number="303"></td>
        <td id="LC303" class="blob-code blob-code-inner js-file-line">      <span class="pl-smi">mEventIsInternal</span>) {</td>
      </tr>
      <tr>
        <td id="L304" class="blob-num js-line-number" data-line-number="304"></td>
        <td id="LC304" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-smi">mLayerPoint</span>;</td>
      </tr>
      <tr>
        <td id="L305" class="blob-num js-line-number" data-line-number="305"></td>
        <td id="LC305" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L306" class="blob-num js-line-number" data-line-number="306"></td>
        <td id="LC306" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">//</span> XXX I&#39;m not really sure this is correct; it&#39;s my best shot, though</span></td>
      </tr>
      <tr>
        <td id="L307" class="blob-num js-line-number" data-line-number="307"></td>
        <td id="LC307" class="blob-code blob-code-inner js-file-line">  nsIFrame* targetFrame = <span class="pl-smi">mPresContext</span>-&gt;<span class="pl-c1">EventStateManager</span>()-&gt;<span class="pl-c1">GetEventTarget</span>();</td>
      </tr>
      <tr>
        <td id="L308" class="blob-num js-line-number" data-line-number="308"></td>
        <td id="LC308" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (!targetFrame)</td>
      </tr>
      <tr>
        <td id="L309" class="blob-num js-line-number" data-line-number="309"></td>
        <td id="LC309" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-smi">mLayerPoint</span>;</td>
      </tr>
      <tr>
        <td id="L310" class="blob-num js-line-number" data-line-number="310"></td>
        <td id="LC310" class="blob-code blob-code-inner js-file-line">  nsIFrame* layer = <span class="pl-c1">nsLayoutUtils::GetClosestLayer</span>(targetFrame);</td>
      </tr>
      <tr>
        <td id="L311" class="blob-num js-line-number" data-line-number="311"></td>
        <td id="LC311" class="blob-code blob-code-inner js-file-line">  nsPoint <span class="pl-smi">pt</span>(<span class="pl-c1">nsLayoutUtils::GetEventCoordinatesRelativeTo</span>(<span class="pl-smi">mEvent</span>, layer));</td>
      </tr>
      <tr>
        <td id="L312" class="blob-num js-line-number" data-line-number="312"></td>
        <td id="LC312" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> <span class="pl-c1">nsIntPoint</span>(<span class="pl-c1">nsPresContext::AppUnitsToIntCSSPixels</span>(pt.<span class="pl-smi">x</span>),</td>
      </tr>
      <tr>
        <td id="L313" class="blob-num js-line-number" data-line-number="313"></td>
        <td id="LC313" class="blob-code blob-code-inner js-file-line">                    <span class="pl-c1">nsPresContext::AppUnitsToIntCSSPixels</span>(pt.<span class="pl-smi">y</span>));</td>
      </tr>
      <tr>
        <td id="L314" class="blob-num js-line-number" data-line-number="314"></td>
        <td id="LC314" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L315" class="blob-num js-line-number" data-line-number="315"></td>
        <td id="LC315" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L316" class="blob-num js-line-number" data-line-number="316"></td>
        <td id="LC316" class="blob-code blob-code-inner js-file-line">NS_IMETHODIMP</td>
      </tr>
      <tr>
        <td id="L317" class="blob-num js-line-number" data-line-number="317"></td>
        <td id="LC317" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::GetLayerX</span>(<span class="pl-c1">int32_t</span>* aLayerX)</td>
      </tr>
      <tr>
        <td id="L318" class="blob-num js-line-number" data-line-number="318"></td>
        <td id="LC318" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L319" class="blob-num js-line-number" data-line-number="319"></td>
        <td id="LC319" class="blob-code blob-code-inner js-file-line">  <span class="pl-en">NS_ENSURE_ARG_POINTER</span>(aLayerX);</td>
      </tr>
      <tr>
        <td id="L320" class="blob-num js-line-number" data-line-number="320"></td>
        <td id="LC320" class="blob-code blob-code-inner js-file-line">  *aLayerX = <span class="pl-c1">GetLayerPoint</span>().<span class="pl-smi">x</span>;</td>
      </tr>
      <tr>
        <td id="L321" class="blob-num js-line-number" data-line-number="321"></td>
        <td id="LC321" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> NS_OK;</td>
      </tr>
      <tr>
        <td id="L322" class="blob-num js-line-number" data-line-number="322"></td>
        <td id="LC322" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L323" class="blob-num js-line-number" data-line-number="323"></td>
        <td id="LC323" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L324" class="blob-num js-line-number" data-line-number="324"></td>
        <td id="LC324" class="blob-code blob-code-inner js-file-line">NS_IMETHODIMP</td>
      </tr>
      <tr>
        <td id="L325" class="blob-num js-line-number" data-line-number="325"></td>
        <td id="LC325" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::GetLayerY</span>(<span class="pl-c1">int32_t</span>* aLayerY)</td>
      </tr>
      <tr>
        <td id="L326" class="blob-num js-line-number" data-line-number="326"></td>
        <td id="LC326" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L327" class="blob-num js-line-number" data-line-number="327"></td>
        <td id="LC327" class="blob-code blob-code-inner js-file-line">  <span class="pl-en">NS_ENSURE_ARG_POINTER</span>(aLayerY);</td>
      </tr>
      <tr>
        <td id="L328" class="blob-num js-line-number" data-line-number="328"></td>
        <td id="LC328" class="blob-code blob-code-inner js-file-line">  *aLayerY = <span class="pl-c1">GetLayerPoint</span>().<span class="pl-smi">y</span>;</td>
      </tr>
      <tr>
        <td id="L329" class="blob-num js-line-number" data-line-number="329"></td>
        <td id="LC329" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> NS_OK;</td>
      </tr>
      <tr>
        <td id="L330" class="blob-num js-line-number" data-line-number="330"></td>
        <td id="LC330" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L331" class="blob-num js-line-number" data-line-number="331"></td>
        <td id="LC331" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L332" class="blob-num js-line-number" data-line-number="332"></td>
        <td id="LC332" class="blob-code blob-code-inner js-file-line">mozilla::dom::Event*</td>
      </tr>
      <tr>
        <td id="L333" class="blob-num js-line-number" data-line-number="333"></td>
        <td id="LC333" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::AsEvent</span>(<span class="pl-k">void</span>)</td>
      </tr>
      <tr>
        <td id="L334" class="blob-num js-line-number" data-line-number="334"></td>
        <td id="LC334" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L335" class="blob-num js-line-number" data-line-number="335"></td>
        <td id="LC335" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> <span class="pl-c1">this</span>;</td>
      </tr>
      <tr>
        <td id="L336" class="blob-num js-line-number" data-line-number="336"></td>
        <td id="LC336" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L337" class="blob-num js-line-number" data-line-number="337"></td>
        <td id="LC337" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L338" class="blob-num js-line-number" data-line-number="338"></td>
        <td id="LC338" class="blob-code blob-code-inner js-file-line">NS_IMETHODIMP</td>
      </tr>
      <tr>
        <td id="L339" class="blob-num js-line-number" data-line-number="339"></td>
        <td id="LC339" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::DuplicatePrivateData</span>()</td>
      </tr>
      <tr>
        <td id="L340" class="blob-num js-line-number" data-line-number="340"></td>
        <td id="LC340" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L341" class="blob-num js-line-number" data-line-number="341"></td>
        <td id="LC341" class="blob-code blob-code-inner js-file-line">  <span class="pl-smi">mClientPoint</span> =</td>
      </tr>
      <tr>
        <td id="L342" class="blob-num js-line-number" data-line-number="342"></td>
        <td id="LC342" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">Event::GetClientCoords</span>(<span class="pl-smi">mPresContext</span>, <span class="pl-smi">mEvent</span>, <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mRefPoint</span>,</td>
      </tr>
      <tr>
        <td id="L343" class="blob-num js-line-number" data-line-number="343"></td>
        <td id="LC343" class="blob-code blob-code-inner js-file-line">                           <span class="pl-smi">mClientPoint</span>);</td>
      </tr>
      <tr>
        <td id="L344" class="blob-num js-line-number" data-line-number="344"></td>
        <td id="LC344" class="blob-code blob-code-inner js-file-line">  <span class="pl-smi">mMovementPoint</span> = <span class="pl-c1">GetMovementPoint</span>();</td>
      </tr>
      <tr>
        <td id="L345" class="blob-num js-line-number" data-line-number="345"></td>
        <td id="LC345" class="blob-code blob-code-inner js-file-line">  <span class="pl-smi">mLayerPoint</span> = <span class="pl-c1">GetLayerPoint</span>();</td>
      </tr>
      <tr>
        <td id="L346" class="blob-num js-line-number" data-line-number="346"></td>
        <td id="LC346" class="blob-code blob-code-inner js-file-line">  <span class="pl-smi">mPagePoint</span> =</td>
      </tr>
      <tr>
        <td id="L347" class="blob-num js-line-number" data-line-number="347"></td>
        <td id="LC347" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">Event::GetPageCoords</span>(<span class="pl-smi">mPresContext</span>, <span class="pl-smi">mEvent</span>, <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mRefPoint</span>, <span class="pl-smi">mClientPoint</span>);</td>
      </tr>
      <tr>
        <td id="L348" class="blob-num js-line-number" data-line-number="348"></td>
        <td id="LC348" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">//</span> GetScreenPoint converts mEvent-&gt;mRefPoint to right coordinates.</span></td>
      </tr>
      <tr>
        <td id="L349" class="blob-num js-line-number" data-line-number="349"></td>
        <td id="LC349" class="blob-code blob-code-inner js-file-line">  CSSIntPoint screenPoint =</td>
      </tr>
      <tr>
        <td id="L350" class="blob-num js-line-number" data-line-number="350"></td>
        <td id="LC350" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">Event::GetScreenCoords</span>(<span class="pl-smi">mPresContext</span>, <span class="pl-smi">mEvent</span>, <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mRefPoint</span>);</td>
      </tr>
      <tr>
        <td id="L351" class="blob-num js-line-number" data-line-number="351"></td>
        <td id="LC351" class="blob-code blob-code-inner js-file-line">  nsresult rv = <span class="pl-c1">Event::DuplicatePrivateData</span>();</td>
      </tr>
      <tr>
        <td id="L352" class="blob-num js-line-number" data-line-number="352"></td>
        <td id="LC352" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (NS_SUCCEEDED(rv)) {</td>
      </tr>
      <tr>
        <td id="L353" class="blob-num js-line-number" data-line-number="353"></td>
        <td id="LC353" class="blob-code blob-code-inner js-file-line">    CSSToLayoutDeviceScale scale = <span class="pl-smi">mPresContext</span> ? <span class="pl-smi">mPresContext</span>-&gt;<span class="pl-c1">CSSToDevPixelScale</span>()</td>
      </tr>
      <tr>
        <td id="L354" class="blob-num js-line-number" data-line-number="354"></td>
        <td id="LC354" class="blob-code blob-code-inner js-file-line">                                                : <span class="pl-c1">CSSToLayoutDeviceScale</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L355" class="blob-num js-line-number" data-line-number="355"></td>
        <td id="LC355" class="blob-code blob-code-inner js-file-line">    <span class="pl-smi">mEvent</span>-&gt;<span class="pl-smi">mRefPoint</span> = <span class="pl-c1">RoundedToInt</span>(screenPoint * scale);</td>
      </tr>
      <tr>
        <td id="L356" class="blob-num js-line-number" data-line-number="356"></td>
        <td id="LC356" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L357" class="blob-num js-line-number" data-line-number="357"></td>
        <td id="LC357" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> rv;</td>
      </tr>
      <tr>
        <td id="L358" class="blob-num js-line-number" data-line-number="358"></td>
        <td id="LC358" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L359" class="blob-num js-line-number" data-line-number="359"></td>
        <td id="LC359" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L360" class="blob-num js-line-number" data-line-number="360"></td>
        <td id="LC360" class="blob-code blob-code-inner js-file-line"><span class="pl-en">NS_IMETHODIMP_</span>(<span class="pl-k">void</span>)</td>
      </tr>
      <tr>
        <td id="L361" class="blob-num js-line-number" data-line-number="361"></td>
        <td id="LC361" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::Serialize</span>(IPC::Message* aMsg, <span class="pl-k">bool</span> aSerializeInterfaceType)</td>
      </tr>
      <tr>
        <td id="L362" class="blob-num js-line-number" data-line-number="362"></td>
        <td id="LC362" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L363" class="blob-num js-line-number" data-line-number="363"></td>
        <td id="LC363" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (aSerializeInterfaceType) {</td>
      </tr>
      <tr>
        <td id="L364" class="blob-num js-line-number" data-line-number="364"></td>
        <td id="LC364" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">IPC::WriteParam</span>(aMsg, NS_LITERAL_STRING(<span class="pl-s"><span class="pl-pds">&quot;</span>uievent<span class="pl-pds">&quot;</span></span>));</td>
      </tr>
      <tr>
        <td id="L365" class="blob-num js-line-number" data-line-number="365"></td>
        <td id="LC365" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L366" class="blob-num js-line-number" data-line-number="366"></td>
        <td id="LC366" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L367" class="blob-num js-line-number" data-line-number="367"></td>
        <td id="LC367" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">Event::Serialize</span>(aMsg, <span class="pl-c1">false</span>);</td>
      </tr>
      <tr>
        <td id="L368" class="blob-num js-line-number" data-line-number="368"></td>
        <td id="LC368" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L369" class="blob-num js-line-number" data-line-number="369"></td>
        <td id="LC369" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">int32_t</span> detail = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L370" class="blob-num js-line-number" data-line-number="370"></td>
        <td id="LC370" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">GetDetail</span>(&amp;detail);</td>
      </tr>
      <tr>
        <td id="L371" class="blob-num js-line-number" data-line-number="371"></td>
        <td id="LC371" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">IPC::WriteParam</span>(aMsg, detail);</td>
      </tr>
      <tr>
        <td id="L372" class="blob-num js-line-number" data-line-number="372"></td>
        <td id="LC372" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L373" class="blob-num js-line-number" data-line-number="373"></td>
        <td id="LC373" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L374" class="blob-num js-line-number" data-line-number="374"></td>
        <td id="LC374" class="blob-code blob-code-inner js-file-line"><span class="pl-en">NS_IMETHODIMP_</span>(<span class="pl-k">bool</span>)</td>
      </tr>
      <tr>
        <td id="L375" class="blob-num js-line-number" data-line-number="375"></td>
        <td id="LC375" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::Deserialize</span>(<span class="pl-k">const</span> IPC::Message* aMsg, PickleIterator* aIter)</td>
      </tr>
      <tr>
        <td id="L376" class="blob-num js-line-number" data-line-number="376"></td>
        <td id="LC376" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L377" class="blob-num js-line-number" data-line-number="377"></td>
        <td id="LC377" class="blob-code blob-code-inner js-file-line">  <span class="pl-en">NS_ENSURE_TRUE</span>(Event::Deserialize(aMsg, aIter), false);</td>
      </tr>
      <tr>
        <td id="L378" class="blob-num js-line-number" data-line-number="378"></td>
        <td id="LC378" class="blob-code blob-code-inner js-file-line">  <span class="pl-en">NS_ENSURE_TRUE</span>(IPC::ReadParam(aMsg, aIter, &amp;<span class="pl-smi">mDetail</span>), false);</td>
      </tr>
      <tr>
        <td id="L379" class="blob-num js-line-number" data-line-number="379"></td>
        <td id="LC379" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L380" class="blob-num js-line-number" data-line-number="380"></td>
        <td id="LC380" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L381" class="blob-num js-line-number" data-line-number="381"></td>
        <td id="LC381" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L382" class="blob-num js-line-number" data-line-number="382"></td>
        <td id="LC382" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> XXX Following struct and array are used only in</span></td>
      </tr>
      <tr>
        <td id="L383" class="blob-num js-line-number" data-line-number="383"></td>
        <td id="LC383" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>     UIEvent::ComputeModifierState(), but if we define them in it,</span></td>
      </tr>
      <tr>
        <td id="L384" class="blob-num js-line-number" data-line-number="384"></td>
        <td id="LC384" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>     we fail to build on Mac at calling mozilla::ArrayLength().</span></td>
      </tr>
      <tr>
        <td id="L385" class="blob-num js-line-number" data-line-number="385"></td>
        <td id="LC385" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ModifierPair</span></td>
      </tr>
      <tr>
        <td id="L386" class="blob-num js-line-number" data-line-number="386"></td>
        <td id="LC386" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L387" class="blob-num js-line-number" data-line-number="387"></td>
        <td id="LC387" class="blob-code blob-code-inner js-file-line">  Modifier modifier;</td>
      </tr>
      <tr>
        <td id="L388" class="blob-num js-line-number" data-line-number="388"></td>
        <td id="LC388" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">const</span> <span class="pl-k">char</span>* name;</td>
      </tr>
      <tr>
        <td id="L389" class="blob-num js-line-number" data-line-number="389"></td>
        <td id="LC389" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L390" class="blob-num js-line-number" data-line-number="390"></td>
        <td id="LC390" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> ModifierPair <span class="pl-c1">kPairs</span>[] = {</td>
      </tr>
      <tr>
        <td id="L391" class="blob-num js-line-number" data-line-number="391"></td>
        <td id="LC391" class="blob-code blob-code-inner js-file-line">  { MODIFIER_ALT,        NS_DOM_KEYNAME_ALT },</td>
      </tr>
      <tr>
        <td id="L392" class="blob-num js-line-number" data-line-number="392"></td>
        <td id="LC392" class="blob-code blob-code-inner js-file-line">  { MODIFIER_ALTGRAPH,   NS_DOM_KEYNAME_ALTGRAPH },</td>
      </tr>
      <tr>
        <td id="L393" class="blob-num js-line-number" data-line-number="393"></td>
        <td id="LC393" class="blob-code blob-code-inner js-file-line">  { MODIFIER_CAPSLOCK,   NS_DOM_KEYNAME_CAPSLOCK },</td>
      </tr>
      <tr>
        <td id="L394" class="blob-num js-line-number" data-line-number="394"></td>
        <td id="LC394" class="blob-code blob-code-inner js-file-line">  { MODIFIER_CONTROL,    NS_DOM_KEYNAME_CONTROL },</td>
      </tr>
      <tr>
        <td id="L395" class="blob-num js-line-number" data-line-number="395"></td>
        <td id="LC395" class="blob-code blob-code-inner js-file-line">  { MODIFIER_FN,         NS_DOM_KEYNAME_FN },</td>
      </tr>
      <tr>
        <td id="L396" class="blob-num js-line-number" data-line-number="396"></td>
        <td id="LC396" class="blob-code blob-code-inner js-file-line">  { MODIFIER_FNLOCK,     NS_DOM_KEYNAME_FNLOCK },</td>
      </tr>
      <tr>
        <td id="L397" class="blob-num js-line-number" data-line-number="397"></td>
        <td id="LC397" class="blob-code blob-code-inner js-file-line">  { MODIFIER_META,       NS_DOM_KEYNAME_META },</td>
      </tr>
      <tr>
        <td id="L398" class="blob-num js-line-number" data-line-number="398"></td>
        <td id="LC398" class="blob-code blob-code-inner js-file-line">  { MODIFIER_NUMLOCK,    NS_DOM_KEYNAME_NUMLOCK },</td>
      </tr>
      <tr>
        <td id="L399" class="blob-num js-line-number" data-line-number="399"></td>
        <td id="LC399" class="blob-code blob-code-inner js-file-line">  { MODIFIER_SCROLLLOCK, NS_DOM_KEYNAME_SCROLLLOCK },</td>
      </tr>
      <tr>
        <td id="L400" class="blob-num js-line-number" data-line-number="400"></td>
        <td id="LC400" class="blob-code blob-code-inner js-file-line">  { MODIFIER_SHIFT,      NS_DOM_KEYNAME_SHIFT },</td>
      </tr>
      <tr>
        <td id="L401" class="blob-num js-line-number" data-line-number="401"></td>
        <td id="LC401" class="blob-code blob-code-inner js-file-line">  { MODIFIER_SYMBOL,     NS_DOM_KEYNAME_SYMBOL },</td>
      </tr>
      <tr>
        <td id="L402" class="blob-num js-line-number" data-line-number="402"></td>
        <td id="LC402" class="blob-code blob-code-inner js-file-line">  { MODIFIER_SYMBOLLOCK, NS_DOM_KEYNAME_SYMBOLLOCK },</td>
      </tr>
      <tr>
        <td id="L403" class="blob-num js-line-number" data-line-number="403"></td>
        <td id="LC403" class="blob-code blob-code-inner js-file-line">  { MODIFIER_OS,         NS_DOM_KEYNAME_OS }</td>
      </tr>
      <tr>
        <td id="L404" class="blob-num js-line-number" data-line-number="404"></td>
        <td id="LC404" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L405" class="blob-num js-line-number" data-line-number="405"></td>
        <td id="LC405" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L406" class="blob-num js-line-number" data-line-number="406"></td>
        <td id="LC406" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> static</span></td>
      </tr>
      <tr>
        <td id="L407" class="blob-num js-line-number" data-line-number="407"></td>
        <td id="LC407" class="blob-code blob-code-inner js-file-line">Modifiers</td>
      </tr>
      <tr>
        <td id="L408" class="blob-num js-line-number" data-line-number="408"></td>
        <td id="LC408" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::ComputeModifierState</span>(<span class="pl-k">const</span> nsAString&amp; aModifiersList)</td>
      </tr>
      <tr>
        <td id="L409" class="blob-num js-line-number" data-line-number="409"></td>
        <td id="LC409" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L410" class="blob-num js-line-number" data-line-number="410"></td>
        <td id="LC410" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (aModifiersList.<span class="pl-c1">IsEmpty</span>()) {</td>
      </tr>
      <tr>
        <td id="L411" class="blob-num js-line-number" data-line-number="411"></td>
        <td id="LC411" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L412" class="blob-num js-line-number" data-line-number="412"></td>
        <td id="LC412" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L413" class="blob-num js-line-number" data-line-number="413"></td>
        <td id="LC413" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L414" class="blob-num js-line-number" data-line-number="414"></td>
        <td id="LC414" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">//</span> Be careful about the performance.  If aModifiersList is too long,</span></td>
      </tr>
      <tr>
        <td id="L415" class="blob-num js-line-number" data-line-number="415"></td>
        <td id="LC415" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">//</span> parsing it needs too long time.</span></td>
      </tr>
      <tr>
        <td id="L416" class="blob-num js-line-number" data-line-number="416"></td>
        <td id="LC416" class="blob-code blob-code-inner js-file-line">  <span class="pl-c"><span class="pl-c">//</span> XXX Should we abort if aModifiersList is too long?</span></td>
      </tr>
      <tr>
        <td id="L417" class="blob-num js-line-number" data-line-number="417"></td>
        <td id="LC417" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L418" class="blob-num js-line-number" data-line-number="418"></td>
        <td id="LC418" class="blob-code blob-code-inner js-file-line">  Modifiers modifiers = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L419" class="blob-num js-line-number" data-line-number="419"></td>
        <td id="LC419" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L420" class="blob-num js-line-number" data-line-number="420"></td>
        <td id="LC420" class="blob-code blob-code-inner js-file-line">  nsAString::const_iterator listStart, listEnd;</td>
      </tr>
      <tr>
        <td id="L421" class="blob-num js-line-number" data-line-number="421"></td>
        <td id="LC421" class="blob-code blob-code-inner js-file-line">  aModifiersList.<span class="pl-c1">BeginReading</span>(listStart);</td>
      </tr>
      <tr>
        <td id="L422" class="blob-num js-line-number" data-line-number="422"></td>
        <td id="LC422" class="blob-code blob-code-inner js-file-line">  aModifiersList.<span class="pl-c1">EndReading</span>(listEnd);</td>
      </tr>
      <tr>
        <td id="L423" class="blob-num js-line-number" data-line-number="423"></td>
        <td id="LC423" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L424" class="blob-num js-line-number" data-line-number="424"></td>
        <td id="LC424" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">for</span> (<span class="pl-c1">uint32_t</span> i = <span class="pl-c1">0</span>; i &lt; <span class="pl-c1">ArrayLength</span>(<span class="pl-c1">kPairs</span>); i++) {</td>
      </tr>
      <tr>
        <td id="L425" class="blob-num js-line-number" data-line-number="425"></td>
        <td id="LC425" class="blob-code blob-code-inner js-file-line">    nsAString::const_iterator <span class="pl-smi">start</span>(listStart), <span class="pl-c1">end</span>(listEnd);</td>
      </tr>
      <tr>
        <td id="L426" class="blob-num js-line-number" data-line-number="426"></td>
        <td id="LC426" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (!<span class="pl-c1">FindInReadable</span>(NS_ConvertASCIItoUTF16(<span class="pl-c1">kPairs</span>[i].<span class="pl-smi">name</span>), start, end)) {</td>
      </tr>
      <tr>
        <td id="L427" class="blob-num js-line-number" data-line-number="427"></td>
        <td id="LC427" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">continue</span>;</td>
      </tr>
      <tr>
        <td id="L428" class="blob-num js-line-number" data-line-number="428"></td>
        <td id="LC428" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L429" class="blob-num js-line-number" data-line-number="429"></td>
        <td id="LC429" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L430" class="blob-num js-line-number" data-line-number="430"></td>
        <td id="LC430" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> ((start != listStart &amp;&amp; !NS_IsAsciiWhitespace(*(--start))) ||</td>
      </tr>
      <tr>
        <td id="L431" class="blob-num js-line-number" data-line-number="431"></td>
        <td id="LC431" class="blob-code blob-code-inner js-file-line">        (end != listEnd &amp;&amp; !NS_IsAsciiWhitespace(*(end)))) {</td>
      </tr>
      <tr>
        <td id="L432" class="blob-num js-line-number" data-line-number="432"></td>
        <td id="LC432" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">continue</span>;</td>
      </tr>
      <tr>
        <td id="L433" class="blob-num js-line-number" data-line-number="433"></td>
        <td id="LC433" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L434" class="blob-num js-line-number" data-line-number="434"></td>
        <td id="LC434" class="blob-code blob-code-inner js-file-line">    modifiers |= <span class="pl-c1">kPairs</span>[i].<span class="pl-smi">modifier</span>;</td>
      </tr>
      <tr>
        <td id="L435" class="blob-num js-line-number" data-line-number="435"></td>
        <td id="LC435" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L436" class="blob-num js-line-number" data-line-number="436"></td>
        <td id="LC436" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L437" class="blob-num js-line-number" data-line-number="437"></td>
        <td id="LC437" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> modifiers;</td>
      </tr>
      <tr>
        <td id="L438" class="blob-num js-line-number" data-line-number="438"></td>
        <td id="LC438" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L439" class="blob-num js-line-number" data-line-number="439"></td>
        <td id="LC439" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L440" class="blob-num js-line-number" data-line-number="440"></td>
        <td id="LC440" class="blob-code blob-code-inner js-file-line"><span class="pl-k">bool</span></td>
      </tr>
      <tr>
        <td id="L441" class="blob-num js-line-number" data-line-number="441"></td>
        <td id="LC441" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::GetModifierStateInternal</span>(<span class="pl-k">const</span> nsAString&amp; aKey)</td>
      </tr>
      <tr>
        <td id="L442" class="blob-num js-line-number" data-line-number="442"></td>
        <td id="LC442" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L443" class="blob-num js-line-number" data-line-number="443"></td>
        <td id="LC443" class="blob-code blob-code-inner js-file-line">  WidgetInputEvent* inputEvent = <span class="pl-smi">mEvent</span>-&gt;<span class="pl-c1">AsInputEvent</span>();</td>
      </tr>
      <tr>
        <td id="L444" class="blob-num js-line-number" data-line-number="444"></td>
        <td id="LC444" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">MOZ_ASSERT</span>(inputEvent, <span class="pl-s"><span class="pl-pds">&quot;</span>mEvent must be WidgetInputEvent or derived class<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L445" class="blob-num js-line-number" data-line-number="445"></td>
        <td id="LC445" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> ((inputEvent-&gt;<span class="pl-smi">mModifiers</span> &amp; <span class="pl-c1">WidgetInputEvent::GetModifier</span>(aKey)) != <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L446" class="blob-num js-line-number" data-line-number="446"></td>
        <td id="LC446" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L447" class="blob-num js-line-number" data-line-number="447"></td>
        <td id="LC447" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L448" class="blob-num js-line-number" data-line-number="448"></td>
        <td id="LC448" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L449" class="blob-num js-line-number" data-line-number="449"></td>
        <td id="LC449" class="blob-code blob-code-inner js-file-line"><span class="pl-en">UIEvent::InitModifiers</span>(<span class="pl-k">const</span> EventModifierInit&amp; aParam)</td>
      </tr>
      <tr>
        <td id="L450" class="blob-num js-line-number" data-line-number="450"></td>
        <td id="LC450" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L451" class="blob-num js-line-number" data-line-number="451"></td>
        <td id="LC451" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (NS_WARN_IF(!<span class="pl-smi">mEvent</span>)) {</td>
      </tr>
      <tr>
        <td id="L452" class="blob-num js-line-number" data-line-number="452"></td>
        <td id="LC452" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L453" class="blob-num js-line-number" data-line-number="453"></td>
        <td id="LC453" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L454" class="blob-num js-line-number" data-line-number="454"></td>
        <td id="LC454" class="blob-code blob-code-inner js-file-line">  WidgetInputEvent* inputEvent = <span class="pl-smi">mEvent</span>-&gt;<span class="pl-c1">AsInputEvent</span>();</td>
      </tr>
      <tr>
        <td id="L455" class="blob-num js-line-number" data-line-number="455"></td>
        <td id="LC455" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">MOZ_ASSERT</span>(inputEvent,</td>
      </tr>
      <tr>
        <td id="L456" class="blob-num js-line-number" data-line-number="456"></td>
        <td id="LC456" class="blob-code blob-code-inner js-file-line">             <span class="pl-s"><span class="pl-pds">&quot;</span>This method shouldn&#39;t be called if it doesn&#39;t have modifiers<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L457" class="blob-num js-line-number" data-line-number="457"></td>
        <td id="LC457" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (NS_WARN_IF(!inputEvent)) {</td>
      </tr>
      <tr>
        <td id="L458" class="blob-num js-line-number" data-line-number="458"></td>
        <td id="LC458" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L459" class="blob-num js-line-number" data-line-number="459"></td>
        <td id="LC459" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L460" class="blob-num js-line-number" data-line-number="460"></td>
        <td id="LC460" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L461" class="blob-num js-line-number" data-line-number="461"></td>
        <td id="LC461" class="blob-code blob-code-inner js-file-line">  inputEvent-&gt;<span class="pl-smi">mModifiers</span> = MODIFIER_NONE;</td>
      </tr>
      <tr>
        <td id="L462" class="blob-num js-line-number" data-line-number="462"></td>
        <td id="LC462" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L463" class="blob-num js-line-number" data-line-number="463"></td>
        <td id="LC463" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">SET_MODIFIER</span>(<span class="pl-v">aName, aValue</span>) \</td>
      </tr>
      <tr>
        <td id="L464" class="blob-num js-line-number" data-line-number="464"></td>
        <td id="LC464" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (aParam.<span class="pl-smi">m</span>##aName) { \</td>
      </tr>
      <tr>
        <td id="L465" class="blob-num js-line-number" data-line-number="465"></td>
        <td id="LC465" class="blob-code blob-code-inner js-file-line">    inputEvent-&gt;<span class="pl-smi">mModifiers</span> |= aValue; \</td>
      </tr>
      <tr>
        <td id="L466" class="blob-num js-line-number" data-line-number="466"></td>
        <td id="LC466" class="blob-code blob-code-inner js-file-line">  } \</td>
      </tr>
      <tr>
        <td id="L467" class="blob-num js-line-number" data-line-number="467"></td>
        <td id="LC467" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L468" class="blob-num js-line-number" data-line-number="468"></td>
        <td id="LC468" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">SET_MODIFIER</span>(CtrlKey,                 MODIFIER_CONTROL)</td>
      </tr>
      <tr>
        <td id="L469" class="blob-num js-line-number" data-line-number="469"></td>
        <td id="LC469" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">SET_MODIFIER</span>(ShiftKey,                MODIFIER_SHIFT)</td>
      </tr>
      <tr>
        <td id="L470" class="blob-num js-line-number" data-line-number="470"></td>
        <td id="LC470" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">SET_MODIFIER</span>(AltKey,                  MODIFIER_ALT)</td>
      </tr>
      <tr>
        <td id="L471" class="blob-num js-line-number" data-line-number="471"></td>
        <td id="LC471" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">SET_MODIFIER</span>(MetaKey,                 MODIFIER_META)</td>
      </tr>
      <tr>
        <td id="L472" class="blob-num js-line-number" data-line-number="472"></td>
        <td id="LC472" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">SET_MODIFIER</span>(ModifierAltGraph,        MODIFIER_ALTGRAPH)</td>
      </tr>
      <tr>
        <td id="L473" class="blob-num js-line-number" data-line-number="473"></td>
        <td id="LC473" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">SET_MODIFIER</span>(ModifierCapsLock,        MODIFIER_CAPSLOCK)</td>
      </tr>
      <tr>
        <td id="L474" class="blob-num js-line-number" data-line-number="474"></td>
        <td id="LC474" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">SET_MODIFIER</span>(ModifierFn,              MODIFIER_FN)</td>
      </tr>
      <tr>
        <td id="L475" class="blob-num js-line-number" data-line-number="475"></td>
        <td id="LC475" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">SET_MODIFIER</span>(ModifierFnLock,          MODIFIER_FNLOCK)</td>
      </tr>
      <tr>
        <td id="L476" class="blob-num js-line-number" data-line-number="476"></td>
        <td id="LC476" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">SET_MODIFIER</span>(ModifierNumLock,         MODIFIER_NUMLOCK)</td>
      </tr>
      <tr>
        <td id="L477" class="blob-num js-line-number" data-line-number="477"></td>
        <td id="LC477" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">SET_MODIFIER</span>(ModifierOS,              MODIFIER_OS)</td>
      </tr>
      <tr>
        <td id="L478" class="blob-num js-line-number" data-line-number="478"></td>
        <td id="LC478" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">SET_MODIFIER</span>(ModifierScrollLock,      MODIFIER_SCROLLLOCK)</td>
      </tr>
      <tr>
        <td id="L479" class="blob-num js-line-number" data-line-number="479"></td>
        <td id="LC479" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">SET_MODIFIER</span>(ModifierSymbol,          MODIFIER_SYMBOL)</td>
      </tr>
      <tr>
        <td id="L480" class="blob-num js-line-number" data-line-number="480"></td>
        <td id="LC480" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">SET_MODIFIER</span>(ModifierSymbolLock,      MODIFIER_SYMBOLLOCK)</td>
      </tr>
      <tr>
        <td id="L481" class="blob-num js-line-number" data-line-number="481"></td>
        <td id="LC481" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L482" class="blob-num js-line-number" data-line-number="482"></td>
        <td id="LC482" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">undef</span> SET_MODIFIER</td>
      </tr>
      <tr>
        <td id="L483" class="blob-num js-line-number" data-line-number="483"></td>
        <td id="LC483" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L484" class="blob-num js-line-number" data-line-number="484"></td>
        <td id="LC484" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L485" class="blob-num js-line-number" data-line-number="485"></td>
        <td id="LC485" class="blob-code blob-code-inner js-file-line">} <span class="pl-c"><span class="pl-c">//</span> namespace dom</span></td>
      </tr>
      <tr>
        <td id="L486" class="blob-num js-line-number" data-line-number="486"></td>
        <td id="LC486" class="blob-code blob-code-inner js-file-line">} <span class="pl-c"><span class="pl-c">//</span> namespace mozilla</span></td>
      </tr>
      <tr>
        <td id="L487" class="blob-num js-line-number" data-line-number="487"></td>
        <td id="LC487" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L488" class="blob-num js-line-number" data-line-number="488"></td>
        <td id="LC488" class="blob-code blob-code-inner js-file-line"><span class="pl-k">using</span> <span class="pl-k">namespace</span> <span class="pl-en">mozilla</span><span class="pl-k">;</span></td>
      </tr>
      <tr>
        <td id="L489" class="blob-num js-line-number" data-line-number="489"></td>
        <td id="LC489" class="blob-code blob-code-inner js-file-line"><span class="pl-k">using</span> <span class="pl-k">namespace</span> <span class="pl-en">mozilla</span>::dom<span class="pl-k">;</span></td>
      </tr>
      <tr>
        <td id="L490" class="blob-num js-line-number" data-line-number="490"></td>
        <td id="LC490" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L491" class="blob-num js-line-number" data-line-number="491"></td>
        <td id="LC491" class="blob-code blob-code-inner js-file-line">already_AddRefed&lt;UIEvent&gt;</td>
      </tr>
      <tr>
        <td id="L492" class="blob-num js-line-number" data-line-number="492"></td>
        <td id="LC492" class="blob-code blob-code-inner js-file-line"><span class="pl-en">NS_NewDOMUIEvent</span>(EventTarget* aOwner,</td>
      </tr>
      <tr>
        <td id="L493" class="blob-num js-line-number" data-line-number="493"></td>
        <td id="LC493" class="blob-code blob-code-inner js-file-line">                 nsPresContext* aPresContext,</td>
      </tr>
      <tr>
        <td id="L494" class="blob-num js-line-number" data-line-number="494"></td>
        <td id="LC494" class="blob-code blob-code-inner js-file-line">                 WidgetGUIEvent* aEvent) </td>
      </tr>
      <tr>
        <td id="L495" class="blob-num js-line-number" data-line-number="495"></td>
        <td id="LC495" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L496" class="blob-num js-line-number" data-line-number="496"></td>
        <td id="LC496" class="blob-code blob-code-inner js-file-line">  RefPtr&lt;UIEvent&gt; it = <span class="pl-k">new</span> <span class="pl-c1">UIEvent</span>(aOwner, aPresContext, aEvent);</td>
      </tr>
      <tr>
        <td id="L497" class="blob-num js-line-number" data-line-number="497"></td>
        <td id="LC497" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">return</span> it.<span class="pl-c1">forget</span>();</td>
      </tr>
      <tr>
        <td id="L498" class="blob-num js-line-number" data-line-number="498"></td>
        <td id="LC498" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
</table>

  </div>

</div>

<button type="button" data-facebox="#jump-to-line" data-facebox-class="linejump" data-hotkey="l" class="d-none">Jump to Line</button>
<div id="jump-to-line" style="display:none">
  <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="" class="js-jump-to-line-form" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <input class="form-control linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" aria-label="Jump to line" autofocus>
    <button type="submit" class="btn">Go</button>
</form></div>

  </div>
  <div class="modal-backdrop js-touch-events"></div>
</div>




    </div>
  </div>

  </div>

      <div class="container site-footer-container">
  <div class="site-footer" role="contentinfo">
    <ul class="site-footer-links float-right">
        <li><a href="https://github.com/contact" data-ga-click="Footer, go to contact, text:contact">Contact GitHub</a></li>
      <li><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
      <li><a href="https://shop.github.com" data-ga-click="Footer, go to shop, text:shop">Shop</a></li>
        <li><a href="https://github.com/blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a href="https://github.com/about" data-ga-click="Footer, go to about, text:about">About</a></li>

    </ul>

    <a href="https://github.com" aria-label="Homepage" class="site-footer-mark" title="GitHub">
      <svg aria-hidden="true" class="octicon octicon-mark-github" height="24" version="1.1" viewBox="0 0 16 16" width="24"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
</a>
    <ul class="site-footer-links">
      <li>&copy; 2017 <span title="0.12237s from github-fe158-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="https://github.com/site/terms" data-ga-click="Footer, go to terms, text:terms">Terms</a></li>
        <li><a href="https://github.com/site/privacy" data-ga-click="Footer, go to privacy, text:privacy">Privacy</a></li>
        <li><a href="https://github.com/security" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
        <li><a href="https://help.github.com" data-ga-click="Footer, go to help, text:help">Help</a></li>
    </ul>
  </div>
</div>



  

  <div id="ajax-error-message" class="ajax-error-message flash flash-error">
    <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"/></svg>
    <button type="button" class="flash-close js-flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
    </button>
    You can't perform that action at this time.
  </div>


    
    <script crossorigin="anonymous" integrity="sha256-9ZVgaDj6gInYIAHGtNp/a6M/Md3kgGXgA5AUO5DatkI=" src="https://assets-cdn.github.com/assets/frameworks-f595606838fa8089d82001c6b4da7f6ba33f31dde48065e00390143b90dab642.js"></script>
    <script async="async" crossorigin="anonymous" integrity="sha256-AvF1lnHqzBwcRSJpxr9Fq5ftyLKUeP5JfBDrmHAJBoI=" src="https://assets-cdn.github.com/assets/github-02f1759671eacc1c1c452269c6bf45ab97edc8b29478fe497c10eb9870090682.js"></script>
    
    
    
    
  <div class="js-stale-session-flash stale-session-flash flash flash-warn flash-banner d-none">
    <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"/></svg>
    <span class="signed-in-tab-flash">You signed in with another tab or window. <a href="">Reload</a> to refresh your session.</span>
    <span class="signed-out-tab-flash">You signed out in another tab or window. <a href="">Reload</a> to refresh your session.</span>
  </div>
  <div class="facebox" id="facebox" style="display:none;">
  <div class="facebox-popup">
    <div class="facebox-content" role="dialog" aria-labelledby="facebox-header" aria-describedby="facebox-description">
    </div>
    <button type="button" class="facebox-close js-facebox-close" aria-label="Close modal">
      <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
    </button>
  </div>
</div>


  </body>
</html>

