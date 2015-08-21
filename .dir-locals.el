;;; .dir-locals.el --- sketchimo project local variables
;;; Commentary:
;;; Code:
((nil
  .
  ((projectile-project-compilation-cmd
    . "make -j 8 -C \"~/VersionControl/Research/interpolation/build\"")
   (eval
    . (setq-local
       projectile-project-run-cmd
       (expand-file-name
        "~/VersionControl/Research/interpolation/build/interpolation")))
   )
  )
 )
;;; .dir-locals.el ends here
